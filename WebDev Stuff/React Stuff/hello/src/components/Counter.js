import React, { Component } from "react";
import "./style.css";

class Counter extends Component {
  constructor(props) {
    super(props);

    this.state = {
      count: 0,
    };
  }
  increment() {
    this.setState(
      {
        count: this.state.count + 1,
      },
      () => {
        console.log(
          "Synchronous Callback value of setState : ",
          this.state.count
        );
      }
    );
    console.log(
      "Asynchronous Callback Value of setState :",
      this.state.count
    );
  }

  render() {
    return (
      <div className = "main">
        <center> Counter : {this.state.count}</center>
        <br />
        <center>
          <button className="Increment" onClick={() => this.increment()}>
            Increment{" "}
          </button>
          <br/><br/><br/>
          <p className="data"><code>Async callback value of setState will always be one behind Sync value. See console for more details!</code></p>
          
        </center>
      </div>
    );
  }
}

export default Counter;
