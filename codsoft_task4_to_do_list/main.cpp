// main.cpp
#include "to_do_list.h"
#include "input_handler.h"
#include <iostream>

int main()
{
    ToDoList todo; // Create a to-do list object
    InputHandler handle;

    // Main loop for user interaction
    while (true)
    {
        todo.display();
        size_t choice{handle.size_tInputHandler()};

        // Perform action based on user choice
        switch (choice)
        {
        case 1:
        { // Add Task
            todo.clearScreenAfterDelay(0);
            todo.viewTasks();
            std::string desc{};
            std::cout << "Enter task description: ";
            std::getline(std::cin >> std::ws, desc); // Get task description
            todo.addTask(desc);
            todo.clearScreenAfterDelay(1);
            break;
        }
        case 2:
        { // View Tasks
            todo.clearScreenAfterDelay(0);
            todo.viewTasks();
            std::cout << "To clear screen and continue, press (y): ";
            handle.charInputHandler();

            break;
        }
        case 3:
        { // Mark Task as Completed
            todo.clearScreenAfterDelay(0);
            todo.viewTasks();
            std::cout << "Enter task index to mark as completed: ";
            size_t index{handle.size_tInputHandler()}; // Get task index from user
            if (todo.markTaskAsCompleted(index))
            {
                std::cout << "Task marked as completed.\n";
            }
            std::cout << "To clear screen and continue, press (y): ";
            handle.charInputHandler();
            break;
        }
        case 4:
        { // Remove Task
            todo.clearScreenAfterDelay(0);
            todo.viewTasks();
            std::cout << "Enter task index to remove: ";
            size_t index{handle.size_tInputHandler()}; // Get task index from user
            if (todo.removeTask(index))
            {
                std::cout << "Task removed successfully.\n";
            }
            std::cout << "To clear screen and continue, press (y): ";
            handle.charInputHandler();
            break;
        }
        case 5: // Exit
            std::cout << "Exiting program.\n";
            return 0;
        default:
        {
            std::cout << "Invalid choice. Please try again.\n"; // Display error message for invalid choice
            todo.clearScreenAfterDelay(1);
        }
        }
    }

    return 0;
}
