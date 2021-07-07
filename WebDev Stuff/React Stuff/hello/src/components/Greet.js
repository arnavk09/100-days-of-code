import React from "react";
// function Greet() {
//     return <h1 align = "center">Hello Arnav</h1>
// }
export const Greet = (props) => {
  console.log(props);
  return (
    <div>
      <h1 align="center">
        Hello{props.name} a.k.a {props.rank}
      </h1>
      {props.children}
    </div>
  );
};
// ES6 notation
// export default Greet;
