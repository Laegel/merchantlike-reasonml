let themeContext = React.createContext({ money: 0 }: Types.state);

let makeProps = (~value: Types.state, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(themeContext);