#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
std::cout << "Pick a number from 1 to 100.";
std::cin << number;

while (number < 1 || number > 100)
{
    std:: cout << "Invalid. Please pick another number.";
    std:: cin << number
}

std::cout << "Thank you for your input :)";
    
    // Problem 2
int guesses = 1;
std::string favColor = "red";
std::string userGuess;

std::cout << "Guess my favorite color...";
std::cin << userGuess;

while (userGuess != favColor)
{
    std::cout << "Incorrect...Try again :) ";
    std::cin << userGuess;
    guesses = guesses + 1;
}
std::cout << "Correct! That took you " << guesses << " attempt(s)." << std::endl;
    
    // Problem 3
int sum = 0;
int userNum;

std::cout << "How many numbers do you want to add? ";
std::cin << userNum;

for ()


    
    return 0;
}
