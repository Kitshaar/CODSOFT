1. Create a class named Calculator.
2. Inside the Calculator class, declare private member variables: num1, num2, and result of type double.
3. Declare public member functions for each arithmetic operation: add(), subtract(), multiply(), divide().
4. Implement each arithmetic operation function to perform the corresponding operation on num1 and num2 and store the result in the result variable.
5. Create a public member function named getUserInput() to get input from the user for num1 and num2.
6. Inside getUserInput():
   a. Prompt the user to enter the first number (num1) and use cin to read the input.
   b. Use a while loop with cin.fail() to check if the input is valid (i.e., a double).
   c. If the input is not valid, display an error message, clear the input buffer with cin.clear(), and use cin.ignore() to clear the buffer.
   d. Repeat steps a-c until valid input is provided and store it in the num1 variable.
   e. Repeat steps a-d for the second number (num2).
7. Create a public member function named displayMenu() to display the menu of operations (addition, subtraction, multiplication, division) to the user.
8. Inside displayMenu():
   a. Prompt the user to choose an operation and store the choice in a variable.
   b. Use a while loop with cin.fail() to check if the input is valid (i.e., an integer representing the operation choice).
   c. If the input is not valid, display an error message, clear the input buffer with cin.clear(), and use cin.ignore() to clear the buffer.
   d. Repeat steps a-c until valid input is provided.
   e. Use a switch statement to call the corresponding arithmetic operation function based on the user's choice.
9. Display the result of the operation to the user.
10. Create a main function to instantiate an object of the Calculator class and call the member functions to perform the operations.
11. Inside the main function, use a loop to allow the user to perform multiple calculations until they choose to exit.
