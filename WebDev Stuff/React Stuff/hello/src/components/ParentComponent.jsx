import React, { Component } from 'react'
import './style.css'
import ChildComponent from './ChildComponent'
class ParentComponent extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
             parentName : 'Parent'
        }
        this.greetParent=this.greetParent.bind(this)

    }
    greetParent(){
        alert(`Hello ${this.state.parentName}`)
        console.log(this.state.parentName);
        console.log("methodFired, you clicked OK");
    }
    
    render() {
        return (
            <div>
         <ChildComponent greetHandler = {this.greetParent}/>
            </div>
        )
    }
}

export default ParentComponent
