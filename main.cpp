#include <iostream>

int main() {
 int days;
  double population;
  int loop = 0;
  double rate;
std::cout << "Enter the initial population size: ";
  std::cin >> population;
  std::cout << "Enter the daily population increase (as a percentage): ";
  std::cin >> rate;
  std::cout << "Enter the number of days they will multiply: ";
  std::cin >> days;
  if (population>=2&&rate>0&&days>1){
    do {
      ++loop;
      std::cout << "Day " << loop << ": " << population << " organisms" << std::endl;
      population = population + (population * (rate / 100));
       
    } while (loop<days);
    
  } else {
    std::cout<<"Invalid input";
}
  
}