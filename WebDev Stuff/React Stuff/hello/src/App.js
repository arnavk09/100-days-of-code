import "./App.css";
import React from "react";
// import { Buttonsync } from "./components/Buttonsync";
// import { Sample } from "./components/sampleprop";
import { Greet } from "./components/Greet";
// import { Calculate } from "./components/Calculate";
// import Welcome from "./components/classWelcome";
import Message from "./components/Message";
// import Hello from "./components/Hello";
function App() {
  return <div className="App">
   <Greet name = " User" rank="unsigned"/>
   <br></br>

   <Message/>
   
   </div>;
}

export default App;
