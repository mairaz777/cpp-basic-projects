#include <iostream>
#include <cmath>

int main() {
  
  //declaring veriables which are able to hold decimal numbers
  double a, b, c;
  
  std::cout << "Enter a\n";
  std::cin >> a;
 
  std::cout << "Enter b\n";
  std::cin >> b;

  std::cout << "Enter c\n";
  std::cin >> c;
 
  //variables to store roots
  double root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);

  double root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  //output for positive and negative square roots
  std::cout << "a = " << a << " b = " << b << " c = " << c << "\nroot 1 = " << root1 << "\nroot 2 = " << root2 << "\n";

}
