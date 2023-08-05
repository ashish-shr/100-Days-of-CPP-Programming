# ⚡Tricky if() and if-else() statements

## if() statement

### Question 1:

condition = false

> if(condition);<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout << ”coffee” << endl;<br>
> }<br>
> cout << ”go home!” << endl;

- It will display "coffee" and "go home!" because the semicolon in if() terminates the if() statement. So, whether the condition is true or false, the remaining statements will always executes.

### Question 2:

Money = 500

> if(Money = 1000)<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout << ”coffee” << endl;<br>
> }<br>
> cout << ”go home!” << endl;

- It will display "coffee" and "go home!" because the if() statement will always be true no matter what value of Money is entered the condition in if() statement always assigns 1000 to the Money.

### Question 3:

Money = 500

> if(Money > 1000)<br>
> cout << ”coffee” << endl;<br>
> cout << “good coffee” << endl;<br>
> cout << ”go home!” << endl;

- It will display "good coffee" and "go home!", because if(500 > 100) will be false and by default the if() statement takes one statement as a body of if() when no braces are taken. That's why, "coffee" is the body of if() statement by default.

### Question 4:

Money = 100

> if(Money);<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout << ”coffee” << endl;<br>
> }<br>
> cout << ”go home!” << endl;

- It will display "coffee" and "go home!". Also, it will always display "coffee" and "go home!" if value of Money is other than 0 and NULL. If the value of Money is 0 or NULL, it will only display "go home!".

## if-else() statement

### Question 1:

Money = 100

> if(Money >= 100);<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout << ”coffee” << endl;<br>
> }<br>
> else<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout<< “tea” << endl;<br>
> }<br>
> cout << ”go home!” << endl;

- It will throw an error because we cannot use else statement without a previous if() statement.

### Question 2:

Money = 100

> if(Money >= 100)<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout << ”coffee” << endl;<br>
> }<br>
> cout<< “nice evening” << endl;<br>
> else<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout<< “tea” << endl;<br>
> }<br>
> cout << ”go home!” << endl;

- It will throw an error because we cannot write any statements between if() and else statement.

### Question 3:

Money = 100

> if(Money >= 100);<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout << ”coffee” << endl;<br>
> }<br>
> else;<br>
> {<br>&nbsp;&nbsp;&nbsp;&nbsp;
> cout<< “tea” << endl;<br>
> }<br>
> cout << ”go home!” << endl;

- It will throw an error because we cannot use else statement without a previous if() statement. Since, the if() statement is terminated before else statement it will throw an error. But, if the else statement is only terminated then it will display, "coffee", "tea" and "go home!".
