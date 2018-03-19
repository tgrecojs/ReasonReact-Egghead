let component = ReasonReact.statelessComponent("HelloWorld");

let str = ReasonReact.stringToElement;

let make = _children => {
  ...component,
  render: _self => <h2> (str("Hello there world!")) </h2>
};