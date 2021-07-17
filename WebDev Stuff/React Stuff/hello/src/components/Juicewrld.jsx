import React, { Component } from 'react'

class Juicewrld extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
             lifeStatus : "Alive"
        }
        this.checkLife = this.checkLife.bind(this)
    }
    checkLife(){
        alert(`Juice WRLD is dead RIP`)
        console.log("methodFired");
    }

    
    render() {
        return (
            <div>
                <center><button onClick = {this.checkLife} className = "clicky">Life Status</button></center>
            </div>
        )
    }
}

export default Juicewrld
