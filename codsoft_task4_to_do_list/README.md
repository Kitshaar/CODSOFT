# To-Do List Manager

The To-Do List Manager is a console-based application built in C++ that allows users to manage their tasks efficiently. Users can add tasks, view existing tasks, mark tasks as completed, and remove tasks from the list.

## Features

- **Add Task**: Users can add new tasks to the to-do list by providing a description.
- **View Tasks**: Users can view all tasks in the list along with their status (completed or pending).
- **Mark Task as Completed**: Users can mark tasks as completed once they are finished.
- **Remove Task**: Users can remove tasks from the list that are no longer needed.
- **Error Handling**: The application provides error handling for invalid user inputs and prevents crashes.

## Project Structure

The project consists of the following files:

- **task.h/cpp**: Defines the `Task` class, which represents a single task in the to-do list.
- **to_do_list.h/cpp**: Defines the `ToDoList` class, which manages the list of tasks and provides functionality to add, view, mark, and remove tasks.
- **main.cpp**: Contains the main function where the user interacts with the application through a command-line interface.
- **input_handler.h/cpp**: Defines the `InputHandler` class, which provides functions for handling user input in a robust manner.

## Usage

1. **Compile**: Compile the source files using a C++ compiler such as g++.
   ```
   g++ -std=c++20 -o ToDoList task.cpp to_do_list.cpp input_handler.cpp main.cpp
   ```

2. **Run**: Execute the compiled executable to start the To-Do List Manager.
   ```
   ./ToDoList
   ```

3. **Interact**: Follow the on-screen instructions to add, view, mark, and remove tasks from the to-do list.

## Dependencies

The project does not have any external dependencies and can be compiled and run using a standard C++ compiler.

## Contribution:

Contributions to the codebase are welcome. If you find any issues or have suggestions for improvements, feel free to open an issue or create a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](../LICENSE.md)  file for details.

## Contact
For questions, feedback, or support, please contact [Kartik Sharma](mailto:sharmakartik2322002@gmail.com).

## Future Enhancements
- Support for more advanced operations.
- Improved error handling and validation.
- GUI
- Database to store data. 
