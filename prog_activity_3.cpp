#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int num, guess, tries = 0;

  //seed random number generator initialised with current time as start
  srand(time(0));

    //setting the range for the random number: between 1 and 100
    num = rand() % 100 + 1;
  do
  {
  cout << "Enter a number between 1 and 100 : ";
  std::cin >> guess;
  tries++;

  if (guess > num)
    std::cout << "Too high! Try again.\n\n";
  else if (guess < num)
    std::cout << "Too low! Try again.\n\n";
  else
    std::cout << "Correct! You guessed it in " << tries << " tries!\n";
    }
  while (guess != num);
return 0;
}