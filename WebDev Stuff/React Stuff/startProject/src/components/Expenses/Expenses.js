import React from 'react';
import ExpenseItem from './ExpenseItem';
import Card from '../UI/Card';
import './Expenses.css';

const Expenses = (props) => {
  return (
    <Card className="expenses">
      <ExpenseItem
        title={props.stuff[0].title}
        amount={props.stuff[0].amount}
        date={props.stuff[0].date}
      />
      <ExpenseItem
        title={props.stuff[1].title}
        amount={props.stuff[1].amount}
        date={props.stuff[1].date}
      />
      <ExpenseItem
        title={props.stuff[2].title}
        amount={props.stuff[2].amount}
        date={props.stuff[2].date}
      />
      <ExpenseItem
        title={props.stuff[3].title}
        amount={props.stuff[3].amount}
        date={props.stuff[3].date}
      />
    </Card>
  );
}

export default Expenses;
