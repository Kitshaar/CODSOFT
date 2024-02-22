// main.cpp
#include "to_do_list.h"
#include <iostream>

int main()
{
    ToDoList todo; // Create a to-do list object

    // Main loop for user interaction
    while (true)
    {
        // Display menu options
        std::cout << "\nTO-DO List Manager\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";

        // Prompt user for choice
        std::cout << "Enter your choice: ";
        int choice{};
        std::cin >> choice;

        // Perform action based on user choice
        switch (choice)
        {
        case 1:
        { // Add Task
            std::string desc{};
            std::cout << "Enter task description: ";
            std::getline(std::cin >> std::ws, desc); // Get task description
            todo.addTask(desc);
            todo.clearScreenAfterDelay(1);
            break;
        }
        case 2:
        { // View Tasks
            todo.viewTasks();
            std::cout << "To clear screen and continue, press (y): ";
            char counter{};
            std::cin >> counter;
            if (counter == 'y')
            {
                todo.clearScreenAfterDelay(1);
            }

            break;
        }
        case 3:
        { // Mark Task as Completed
            size_t index{};
            std::cout << "Enter task index to mark as completed: ";
            std::cin >> index; // Get task index from user
            if (todo.markTaskAsCompleted(index))
            {
                std::cout << "Task marked as completed.\n";
            }
            std::cout << "To clear screen and continue, press (y): ";
            char counter{};
            std::cin >> counter;
            if (counter == 'y')
            {
                todo.clearScreenAfterDelay(1);
            }
            break;
        }
        case 4:
        { // Remove Task
            size_t index{};
            std::cout << "Enter task index to remove: ";
            std::cin >> index; // Get task index from user
            if (todo.removeTask(index))
            {
                std::cout << "Task removed successfully.\n";
            }
            std::cout << "To clear screen and continue, press (y): ";
            char counter{};
            std::cin >> counter;
            if (counter == 'y')
            {
                todo.clearScreenAfterDelay(1);
            }
            break;
        }
        case 5: // Exit
            std::cout << "Exiting program.\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n"; // Display error message for invalid choice
        }
    }

    return 0;
}
