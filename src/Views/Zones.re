let str = React.string;

type reward = {
  item: int,
  min: int,
  max: int
};

type quest = {
  label: string,
  rewards: array(reward),
};

type zone = {
  label: string,
  quests: array(quest)
};

[@react.component]
let make = () => {
  let zones = [|
    {
      label: "Evergreen Plains",
      quests: [|
        {
          label: "Gathering spot",
          rewards: [|
            {
              item: 6,
              min: 0,
              max: 3
            }
          |]
        },
        {
          label: "Iron golem",
          rewards: [|
            {
              item: 0,
              min: 0,
              max: 3
            },
            {
              item: 8,
              min: 0,
              max: 3
            }
          |]
        }
      |]
    }
  |];

  let quests = zones[0].quests |> Array.map((quest: quest) =>
    <div>{quest.label->str}</div>
  );

  <div>
    <h1>"Zones"->str</h1>
    <Link route="/heroes">"To Heroes"->str</Link>
    <div>
      {quests |> React.array}
    </div>
  </div>
};