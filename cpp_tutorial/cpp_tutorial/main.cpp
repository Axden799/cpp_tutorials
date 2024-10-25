#include "Random.h"
#include <cstddef> // for std::size_t
#include <iostream>

int getNum(int guessCount)
{
    std::cout << "Guess #" << guessCount << ": ";
    int guess{};
    std::cin >> guess;
    ++guessCount;
    return guess;
}

int getRandomInt()
{
    int min{};
    std::cout << "Enter the minimum value for a random integer: ";
    std::cin >> min;
    
    int max{};
    std::cout << "Enter the maximum value for a random integer: ";
    std::cin >> max;
    
    return Random::get(min, max);
}

int getMaxGuesses()
{
    int maxGuesses{};
    std::cout << "Enter the maximum number of allowed guesses: ";
    std::cin >> maxGuesses;
    return maxGuesses;
}

bool checkResponse(int answer, int guess)
{
    if (guess < answer)
    {
        std::cout << "Your guess is too low.\n";
        return false;
    }
    else if (guess > answer)
    {
        std::cout << "Your guess is too high.\n";
        return false;
    }
    else
    {
        std::cout << "Correct! You win!\n";
        return true;
    }
}

void playGame(int answer, int maxGuesses)
{
    for (int guessCount{1}; guessCount <= maxGuesses; ++guessCount)
    {
        int guess{ getNum(guessCount) };
        bool result = checkResponse(answer, guess);
        if (result)
            return;
    }
    std::cout << "Sorry, you lose. The correct number was " << answer << ".\n";
}

bool playAgain()
{
    char response {};
    while (response != 'y')
    {
        std::cout << "Would you like to play again (y/n)?";
        std::cin >> response;
        if (response == 'n')
            return false;
    }
    
    return true;
    
}

int main()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    
    bool play { true };
    while (play)
    {
        int answer { getRandomInt() };
        std::cout << "Answer is: " << answer << '\n';
        
        int maxGuesses{ getMaxGuesses() };
        
        playGame(answer, maxGuesses);
        play = playAgain();
    }

    return 0;
}
