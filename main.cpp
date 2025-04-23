#include <iostream>
#include <random>
int main() {
  std::random_device rd; 
  std::mt19937 generator(rd()); 
  std::uniform_int_distribution<int> distribution(1, 100); 
  int winner = distribution(generator);
  int guess, attempts = 0, condition = 0;
  std::cout << "Guess the number (1 to 100): ";
  std::cin >> guess;
  do{
  if (guess > winner&&guess < 101) {
    std::cout << "Too high!" << std::endl;
    attempts++;
    std::cin >> guess;
  } else if (guess < winner) {
    std::cout << "Too low!" << std::endl;
    attempts++;
    std::cin >> guess;
  } else if (guess == winner) {
    std::cout << "You won!" << std::endl;
    attempts++;
    condition++;
  } else if (g) {
    std::cout << "I don't know what that means." << std::endl;
    std::cin >> guess;
  } 
  }while (condition == 0); {
    std::cout << "You got it in " << attempts << " guesses!!" << std::endl;

  }
  
  
  }
    
