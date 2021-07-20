import React from "react";

function NameList() {
  let names = ["Arnav", "Avyaan", "Help"];
  return (
    <div>
      <center>
       {
           names.map(name=><p>{name}</p>)
       }
      </center>
    </div>
  );
}

export default NameList;
