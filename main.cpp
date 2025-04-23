#include <iostream>

int main() {
    int counter = 0;
  int loop = 0;
  int loop2 = 10;
    std::cout<< "Pattern A:" << std::endl;
  do {
 loop++;
    do {
      std::cout<< "*";
      counter++;
    }while (counter < loop);
    std::cout<< std::endl;
    counter = 0;
  } while (loop < 10);
std::cout << "Pattern B:" << std::endl;
  do{
    loop2--;
    do{
      std::cout<< "*";
      counter++;
    }while (counter < loop2);
    std::cout<< std::endl;
    counter = 0;
  } while (loop2 > 1);
}

