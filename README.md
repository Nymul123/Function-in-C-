# Function-in-C++
Let's break it down step by step:

When cout << print(); is executed in the main() function, the program calls the print() function.
Inside the print() function:
The statement cout << "Hi" << endl; executes first, so "Hi" is printed.
After that, the function returns the integer 2.
The cout statement in main() receives the return value of print(), which is 2, and prints it.
