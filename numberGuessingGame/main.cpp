#include "random.h"
#include <iostream>
#include <limits>
#include <stdlib.h>

int getRandomNumber()
// Returns a seeded Mersenne Twister random number between 1 to 200 using system clock.
{
    return Random::get(1, 200);
}

int guess(int count)
// count stores the iteration that the loop is on.
{
    while (true)
    {
        std::cout << "Guess #" << count << ": ";
        int guess{};
        std::cin >> guess;
        // Asks the user to input a guess.
        // Does the error handling to make sure the guess we recieve is what the program desires.

        if (!std::cin)
        {
            if (std::cin.eof())
            {
                exit(0);
            }
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
            // Asks for input again after clearing the input stream if the input is not of the
            //  desired datatype.
        }
        else if (guess < 1 || guess > 200)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
            // Asks for input again if the value inputted is not between a certain range.
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return guess;
            // ignore the extra input and return the guess made by user to innerloop.
        }
    }
}

char innerLoop(int random)
// Gets the NumberToBeGuessed from the highlow function,
// runs the loop 7 times or until the number is guessed correctly.
{
    char counter{'n'};

    for (int inner{1}; inner <= 7; ++inner)
    {
        int tempGuess{guess(inner)};

        if (tempGuess < random)
        {
            std::cout << "Your guess is too low.\n";
        }
        else if (tempGuess > random)
        {
            std::cout << "Your guess is too high.\n";
        }
        else
        {
            counter = 'y';
            return counter;
            // Returns y thus saying that you guessed correctly.
        }
    }
    return counter;
    // returns n thus saying that you could not guess the number.
}

int highLow()
{
    while (true)
    {
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 200.";
        std::cout << " You have 7 tries to guess what it is.\n";
        int numberToBeGuessed{getRandomNumber()};

        if (innerLoop(numberToBeGuessed) == 'y')
        // checks if you win or lose by calling a function named innerloop
        {
            std::cout << "Correct! You win!\n";
        }
        else
        {
            std::cout << "Sorry, you lose. The correct number was " << numberToBeGuessed << '\n';
        }
        bool again{true};
        while (again)
        {
            // checks if the user wants to play again or quit.
            std::cout << "Would you like to play again (y/n)?";
            char restart{};
            std::cin >> restart;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // clears the stream until a newline to prevent errors.
            if (restart == 'n')
            {
                std::cout << "Thank you for playing.\n";
                return 0;
                // Ends both while loops and thus closes the program.
            }
            if (restart == 'y')
            {
                std::system("cls");
                // Clears the screen and restart the game with a new random number to guess.
                again = false;
            }
        }
    }
    return 0;
}

int main()
{
    highLow();
    return 0;
}
