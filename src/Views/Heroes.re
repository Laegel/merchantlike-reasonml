let str = React.string;

type heroSpecialization =
  | Warrior
  | Mage
  | Rogue;

type hero = {
  name: string,
  specialization: heroSpecialization,
  /* health: int, */
  /* experience: int */
};

let heroSpecializationToString = (specialization: heroSpecialization) => switch (specialization) {
  | Warrior => "Warrior"
  | Mage => "Mage"
  | Rogue => "Rogue"
  };

let decodeHeroSpecialization = (specialization: string) => switch (specialization) {
  | "Warrior" => Warrior
  | "Mage" => Mage
  | "Rogue" => Rogue
}; 

let transformToHero = (json) => {
  Json.Decode.{
    name: (json |> field("name", string)),
    specialization: Json.Decode.(json |> field("specialization", string)) |> decodeHeroSpecialization
  }
};

module HeroEncoder = {
  let encodeOne = (input) => Json.Encode.(
    object_([
      ("name", string(input.name)), 
      ("specialization", string(input.specialization |> heroSpecializationToString))
    ])
  );
}


let heroesKey = "heroes";

let decodeHero = json => 
  Json.Decode.{
    name: json |> field("name", string),
    specialization: switch (json |> Js.Json.decodeString) { 
    | Some(value) => decodeHeroSpecialization(value) 
    }
  };


let decodeHeroes = (json) => switch (json |> Js.Json.decodeArray) {
  | Some(value) => value |> Array.map(cha => transformToHero(cha))
};

let encodeHero = (input: hero) => Js.Json.object_(Js.Dict.fromList([
  ("name", Js.Json.string(input.name)),
  ("specialization", input.specialization |> heroSpecializationToString |> Js.Json.string),
]));


let encodeHeroes = (input: array(hero)) => Js.Json.array(input|>Array.map(encodeHero));


module HeroStorage = {
  let set = (heroes) => {
    heroes 
    |> encodeHeroes 
    |> Js.Json.stringify 
    |> Storage.setItem(heroesKey)
  };

  let get = () => 
    switch(Storage.getItem(heroesKey)) {
    | Some(heroes) => heroes |> Js.Json.parseExn |> decodeHeroes
    | None => [||]
    };

  let add = (hero) => Array.append(get(), [|hero|]) |> set;
};

[@react.component]
let make = () => {

  let heroes = HeroStorage.get() |> Array.map((row) => 
    <div key={row.name}>
      {row.name->str} {heroSpecializationToString(row.specialization)->str}
      <Link route="/zones">"Search quest"->str</Link>
    </div>);
  
  <div>
    <h1>"Heroes"->str</h1>

    {heroes |> React.array}

    <Link route="/heroes-choice">"Recruit"->str</Link>
  </div>
};