let str = React.string;

[@react.component]
let make = (~route, ~children) => {
  <button onClick={(_) => ReasonReactRouter.push(route)}>children</button>
};