let str = React.string;

type craft = {
  item: int,
  experience: int,
  time: int,
  cost: int
}

type crafter = {
  label: string,
  crafts: list(craft),
  cost: int
};

let crafters = [|
  {
    label: "Swordsmith",
    crafts: [
      
    ],
    cost: 0
  },
  {
    label: "Woodworker",
    crafts: [{
      item: 25,
      experience: 10,
      time: 12,
      cost: 5
    },
    {
      item: 26,
      experience: 25,
      time: 30,
      cost: 20
    },
    {
      item: 27,
      experience: 30,
      time: 30,
      cost: 25
    },
    {
      item: 28,
      experience: 40,
      time: 45,
      cost: 30
    },
    {
      item: 29,
      experience: 40,
      time: 45,
      cost: 30
    },
    {
      item: 30,
      experience: 45,
      time: 45,
      cost: 35
    },
    {
      item: 31,
      experience: 55,
      time: 90,
      cost: 40
    },
    {
      item: 32,
      experience: 50,
      time: 45,
      cost: 40
    },
    {
      item: 33,
      experience: 60,
      time: 105,
      cost: 45
    },
    {
      item: 34,
      experience: 70,
      time: 135,
      cost: 55
    },
    {
      item: 35,
      experience: 85,
      time: 150,
      cost: 65
    },
    {
      item: 36,
      experience: 80,
      time: 135,
      cost: 60
    },
    {
      item: 37,
      experience: 125,
      time: 315,
      cost: 90
    },
    {
      item: 38,
      experience: 85,
      time: 175,
      cost: 65
    },],
    cost: 0
  },
  {
    label: "Armorsmith",
    crafts: [],
    cost: 0
  },
  {
    label: "Clothier",
    crafts: [],
    cost: 0
  },
  {
    label: "Alchemist",
    crafts: [],
    cost: 0
  },
  {
    label: "Jeweler",
    cost: 10000,
    crafts: []
  },
  {
    label: "Enchanter",
    cost: 60000,
    crafts: []
  }
|];

[@react.component]
let make = () => {
  <div>
    <h1>"Crafters"->str</h1>

    {crafters |> Array.map((crafter) => 
      <div key={crafter.label}>
        {crafter.label->str}
        <button>"See crafts"->str</button>
        {crafter.crafts 
          |> List.map((craft) => <div key={crafter.label ++ string_of_int(craft.item)}>{List.nth(Items.items, craft.item).label->str}</div>) 
          |> Array.of_list 
          |> React.array}
      </div>) |> React.array}
  </div>
};