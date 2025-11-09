#include <iostream>

int main() {
  

  //your dog age
  int dog_age;

  std::cout << "Please enter Doggie's age\n";
  std::cin >> dog_age;

  //first 2 years equal of 21 human years
  int early_years = 21; 

  //each following year after the forst 2 years counts as 4 human years
  int later_years = (dog_age - 2) * 4;

  //total years
  int human_years = early_years + later_years;

  std::cout << "My name is Doggie! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}