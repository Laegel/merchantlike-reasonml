[@react.component]
let make = () => {
  let theme = React.useContext(StoreContext.themeContext);
  <div>
    <h1>theme.money->string_of_int->React.string</h1>
  </div>
};