[@react.component]
let make = () => {
  <div>
    <button onClick={(_) => ReasonReact.Router.push("/crafters")}>{React.string("Crafters")}</button>
    <button onClick={(_) => ReasonReact.Router.push("/stock")}>{React.string("Stock")}</button>
    <button onClick={(_) => ReasonReact.Router.push("/shop")}>{React.string("Shop")}</button>
    <button onClick={(_) => ReasonReact.Router.push("/heroes")}>{React.string("Heroes")}</button>
  </div>
};