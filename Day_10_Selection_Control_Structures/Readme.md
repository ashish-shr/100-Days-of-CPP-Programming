# ⚡Control Structures in C++

## Selection Control Structure

## Control structures

- Control Structures are just a way to specify flow of control in programs.
- There are three types of control structures in C++ i.e.
  - Sequential
  - Selection
  - Iteration.

## Selection or Decision control structures

- This structure specify flow of control based on the condition defined.
- They are of five types:
  - if
  - if-else
  - else-if ladder
  - nested if-else
  - switch

## if() statement

- It is used to decide whether a certain statement or block of statements will be executed or not i.e if a certain condition is true then a block of statements is executed otherwise not.
- Syntax:
  > if(condition)<br>
  > {<br> &nbsp;&nbsp;&nbsp;&nbsp;// Statements to execute if condition is true<br>
  > }

## if-else() statement

- It consists of two blocks, one for false expression and one for true expression.
- Syntax:
  > if(condition)<br>
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > // Statements to execute if condition is true<br>
  > }<br>
  > else<br>
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > // Executes this block if condition is false<br>
  > }

## else-if() ladder statement

- Syntax:
  > if (condition 1)<br>
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > statement 1;<br>
  > }<br>
  > else if (condition 2)<br>
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > statement 2;<br>
  > }<br>
  > else<br>
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > statement;<br>
  > }

## Nested if-else() statement

- Nested if statements mean an if statement inside another if statement and Similarly for a if-else() and else-if() ladder statements.
- Syntax:
  > if (condition1)<br>
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > // Executes when condition1 is true<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > if (condition2)<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  > // Executes when condition2 is true<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > }<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > else<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  > // Executes when condition2 is false<br>&nbsp;&nbsp;&nbsp;&nbsp;
  > }<br>
  > }
