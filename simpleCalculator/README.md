# Task 2: Simple Calculator Program

## Description
This program is a simple calculator that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. It allows the user to input two numbers and choose an operation to perform.

## Features
- Performs addition, subtraction, multiplication, and division.
- User-friendly command-line interface.
- Robust error handling for invalid user input.

## Usage
To use the calculator program:
1. Run the program.
2. Follow the prompts to input two numbers and choose an operation.
3. View the result of the operation.

## Error Handling
The calculator program includes robust error handling to ensure that it handles invalid user input gracefully. Here are the error handling capabilities:

- **Invalid Number Input**: If the user enters a non-numeric value when prompted to input numbers, the program displays an error message and prompts the user to enter a valid number.

- **Invalid Operation Choice**: If the user enters a number outside the range of available operation choices (1 to 4), the program displays an error message and prompts the user to enter a valid choice.

- **Division by Zero**: If the user attempts to divide by zero, the program detects this condition and displays an error message, indicating that division by zero is not allowed.

- **Invalid Restart/Exit Choice**: When prompted to restart or exit the program, the user is expected to enter either 'y' or 'n'. If the user enters any other character or a word, the program displays an error message and prompts the user again until a valid choice is made.

- **Input Buffer Clearing**: After reading user input, the program clears any additional characters remaining in the input buffer to prevent unexpected behavior or repeated input.

## Examples
```
$ ./calculator
Enter the first number: 10
Enter the second number: hello
Error: Invalid input. Please enter a valid number.
Enter the second number: 5
Select operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 5
Error: Invalid choice. Please enter a number between 1 and 4.
Select operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 4
Error: Division by zero is not allowed. Please enter a non-zero divisor.
Enter your choice: 2
Result: 10 - 5 = 5
Do you want to perform another calculation? (y/n): yes
Error: Invalid input. Please enter 'y' or 'n'.
Do you want to perform another calculation? (y/n): yep
Error: Invalid input. Please enter 'y' or 'n'.
Do you want to perform another calculation? (y/n): n
Exiting the calculator program. Goodbye!
```


## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Contact
For questions, feedback, or support, please contact [Kartik Sharma](mailto:sharmakartik2322002@gmail.com).

## Future Enhancements
- Support for more advanced operations.
- Improved error handling and validation.

