import React, { Component } from "react";

export class UserGreeting extends Component {
  constructor(props) {
    super(props);

    this.state = {
      isLoggedIn: true,
    };
  }

  render() {
    let message;
    if (this.state.isLoggedIn) {
      message = <div><strong>Welcome Arnav</strong></div>;
    } else {
      message = <div><strong>Welcome Guest</strong></div>;
    }
    return <div>{message}</div>;
  }
}

export default UserGreeting;
