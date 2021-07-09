import "./App.css";
import React from "react";
import ClassClick from "./components/ClassClick";
// import { Buttonsync } from "./components/Buttonsync";
// import { Sample } from "./components/sampleprop";
import FunctionClick from "./components/FunctionClick";
import Counter from "./components/Counter";
import { Greet } from "./components/Greet";
// import { Calculate } from "./components/Calculate";
// import Welcome from "./components/classWelcome";
import Message from "./components/Message";
// import Hello from "./components/Hello";
function App() {
  return <div className="App">
   <Greet name = " User" rank="USER"/>
   <br></br>
   <Message/>
   <Counter/>
   <br></br>
   <FunctionClick/>
   <br></br>
   <ClassClick/>
   </div>;
}

export default App;
