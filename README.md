Program 1
 Aim:

To write a C++ program that checks if a user enters the correct password using a while(true) loop.

 Theory:
The program uses an infinite loop (while(true)) to prompt the user.
The loop continues until the correct password is entered.
On a correct match, the loop breaks using the break statement.
string comparison is used to check the input.

 Algorithm:
Start
Set the correct password
Loop infinitely:
Prompt user to enter a password
If input equals correct password:
Print "correct!!"
Break the loop
Else:
Print "try again"
End
Program 2
Aim:
To print even numbers from 1 to 10 using a for loop.
Theory:
A loop is a programming structure that repeats a set of instructions.
The modulus operator % gives the remainder. For even numbers, number % 2 is 0.
The if statement is used to filter out even numbers in this case.
 Algorithm:
Start
Loop from i = 1 to 10
For each i, check:
If i % 2 == 0
If true, print i
End loop
End
Program 3
 Aim:
To print the word “SIT” five times using a for loop.
Theory:
A for loop is used when the number of iterations is known.
i+1 is used to start counting from 1 instead of 0.
cout prints each line in the format: 1.SIT, 2.SIT, ..., 5.SIT.
 Algorithm:
Start
Loop i from 0 to 4
In each iteration:
Print (i + 1).SIT
End loop
End program
Program 4 
Aim:
To print all odd numbers from 1 to 9 using a for loop and the continue statement in C++.

 Theory:
The for loop is used to repeat a block of code.
continue skips the current iteration when the condition is true.
(i % 2 == 0) checks if a number is even. If it is, continue skips the cout for that number.
Thus, only odd numbers are printed.

 Algorithm:
Start
Loop variable i from 1 to 9
If i is divisible by 2 (even), skip printing using continue
Else, print i
Repeat step 2–4
End

Program 5
Aim:
To print a right-angled triangle star pattern using nested for loops in C++.

 Theory:
A nested loop means one loop inside another.
Outer loop (i) controls the number of rows.
Inner loop (j) controls the number of stars printed in each row.
In each iteration of the outer loop, the inner loop prints increasing number of *.

 Algorithm:
Start
Loop i from 1 to 6 (for rows)
Loop j from 1 to i (for printing *)
Print *
Print newline (endl) after inner loop
End

Program 6
Aim:
To print an inverted triangle pattern of stars using nested loops in C++.
 Theory:
The outer loop (i) runs from 6 down to 1, controlling the number of rows.
The inner loop (j) runs from 1 up to i, printing decreasing number of * in each row.
 Algorithm:
Start
Loop i from 6 down to 1 (controls rows)
Loop j from 1 to i
Print *
Print newline (endl)
End
Program 7
AIM:
To write a C++ program that prints a right-aligned triangle pattern using asterisks (*) with nested loops.**

 THEORY:
This program demonstrates how to use nested loops in C++ to generate star patterns. Patterns are a great way to practice loop control, spacing, and formatting output in programming.

 ALGORITHM:
Start the program
Use an outer loop (i from 1 to 6) to control the number of rows.
Inside the outer loop:
Use the first inner loop (j from 1 to 6 - i) to print spaces.
Use the second inner loop (k from 1 to i) to print stars followed by a space.
After both inner loops, print a newline (endl) to go to the next row.
Repeat steps 3–4 until the full triangle is printed.
End the program

Program 8
AIM:
To write a C++ program that prints an inverted right-aligned triangle pattern using asterisks (*) with nested loops.

 THEORY:
This program uses nested loops to print a triangle pattern where each line consists of:
Leading spaces to shift the stars to the right
Followed by a growing number of stars (*)

 ALGORITHM:
 
 Start the program
Use a loop variable i from 6 to 1 (reverse order), to control rows.
Inside the loop:
Print spaces using a loop from j = 0 to i:
Print one space " " (used twice for visual alignment).
Then print stars using a loop from k = 6 to i (reverse but counts increasing number of stars):
Print " *" each time
After both loops, print a newline.
Repeat until the full pattern is printed.
End the program

Program 9
 AIM:To write a C++ program that prints a number triangle pattern using nested loops, where numbers are displayed in a triangular format and increase sequentially from top to bottom.

THEORY:
This program demonstrates how to use nested loops to print numeric patterns. 
The outer loop controls the number of rows, while the inner loop prints the sequential numbers for each row. 
A separate integer variable (here, a) is used to keep track of the current number being printed.
For each new line:
The number of elements in the row increases by 1.The numbers continue sequentially from the last printed number.
This type of logic is helpful in learning:
Loop nesting
Counter variables
 ALGORITHM:
Start the program
Initialize an integer variable a = 1 (to hold the current number to be printed)
Run an outer loop from i = 0 to 3 (controls rows)
Inside the outer loop, run an inner loop from j = 0 to i
Print the current value of a followed by a space
Increment a after each print
After the inner loop, print a newline (cout << endl;)
Repeat the steps until all rows are printed
End the program
Program 10
 AIM:
To write a C++ program that prints numbers from 1 to 20 using a for loop, demonstrating the use of basic iteration for sequence generation.

THEORY:
Loops are a fundamental concept in programming used to repeat a set of instructions. 
In this program, a for loop is used to iterate through the numbers 1 to 20, printing each number in sequence.

ALGORITHM:
Start the program
Use a for loop with:
Initialization: i = 1
Condition: i <= 20
Increment: i++ (increase by 1 each time)
Inside the loop:
Print the value of i followed by a space using cout
After the loop ends, exit the program
End the program

