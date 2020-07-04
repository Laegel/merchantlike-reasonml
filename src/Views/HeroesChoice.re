let str = React.string;

[@react.component]
let make = () => {
  let handleClick = (specialization) => {
    Heroes.HeroStorage.add({
      name: "Bla",
      specialization: Heroes.decodeHeroSpecialization(specialization)
    });
    ReasonReactRouter.push("/heroes");
  };
  
  let heroSpecializations = Array.map(
    (row) => <div key={row}>
              <div>row->str</div>
              <button onClick={(_) => handleClick(row)}>"Pick"->str</button>
            </div>, 
    [|"Warrior", "Mage", "Rogue"|]
  );
  <div>
    <h1>"Hero choice"->str</h1>

    {React.array(heroSpecializations)}

    <Link route="/heroes">"Back"->str</Link>
  </div>
};