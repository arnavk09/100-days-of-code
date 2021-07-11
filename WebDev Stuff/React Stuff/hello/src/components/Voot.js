import React, { Component } from "react";
import "./style.css";

class Voot extends Component {
  constructor(props) {
    super(props);

    this.state = {
      counter: 0,
    };
  }
  increment() {
    this.setState({
      counter: this.state.counter + 1,
    });
  }
  render() {
    return (
      <div>
        <center>Votes : {this.state.counter}</center>
        <center>
          <button className="clicky" onClick={() => this.increment()}>
            Voot
          </button>
        </center>
      </div>
    );
  }
}

export default Voot;
