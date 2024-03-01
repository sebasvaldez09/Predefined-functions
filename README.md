# Predefined-functions

Suppose your math professor asks you to create a program that solves quadratic equations in vertex form, that is, a (x + h)2 + k where a, h, and k are three known values. In order to find the two possible values of x that solve the equation you can use the square root principle as shown below.

For example, given 3 (x + 7)2 = 24 the values of x that solve the equation are calculated in the following way:
x1 = -7 +√ 24/3 = -7 +√ 8 x2 = -7 -√ 24/3 = -7 -√ 8

The values corresponding to a, h, and k must be whole numbers, but the value of x must be a double precision real number with two decimal digits.

Declares variable name that holds text
Declares variables a, h, k that hold whole numbers
Declares variables x1 and x2 that hold double precision real numbers
Prompts the user to "Please enter your name: "
Reads the name from keyboard and stores it in the corresponding variable
Displays title "Please enter the known terms for the quadratic equation:"
Prompts the user to enter a
Reads the value from the keyboard and stores it in the corresponding variable
Prompts the user to enter h
Reads the value from the keyboard and stores it in the corresponding variable
Prompts the user to enter k
Reads the value from the keyboard and stores it in the corresponding variable
Displays "Thanks ", name
Calculates the first solution using the formula shown in the figure above -h + square root(k/a) and stores it in the corresponding variable
Rounds x1 to the second decimal digit and reassigns it to x1
Calculates the second solution using the formula shown in the figure above -h - square root(k/a) and stores it in the corresponding variable
Rounds x2 to the second decimal digit and reassigns it to x2
Formats the output to display the solutions in fixed format with two decimal digits
Prints a message like the one below:
"The solutions for the equation are:"
"x1: ", x1 "x2: ", x2


Test:
Please enter your name: Sebastian
Pllease enter the known terms for the quadratic equation:
A: 4
h: 11
k: 5
Thanks, Sebastian
The soultion for the equation are: 
X1: -9.88
X2: -12.12
