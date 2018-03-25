type state = {count: int};

type action =
  | Increment
  | Decrement;

let component = ReasonReact.reducerComponent("Counter");

let string = ReasonReact.stringToElement;

let make = _children => {
  ...component,
  initialState: () => {count: 0},
  reducer: (action, state) =>
    switch action {
    | Increment => ReasonReact.Update({count: state.count + 1})
    | Decrement => ReasonReact.Update({count: state.count - 1})
    },
  render: ({send, state}) => {
    let msg = "Current Count:  " ++ string_of_int(state.count);
    <div>
      <h2> (string(msg)) </h2>
      <button onClick=(_event => send(Increment))> (string("+")) </button>
      <button onClick=(_event => send(Decrement))> (string("-")) </button>
    </div>;
  }
};