let str = React.string;

[@react.component]
let make = (~children) => {
  <div>
    children
    <Link route="/">"Back"->str</Link>
  </div>
};