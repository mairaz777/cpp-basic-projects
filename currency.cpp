#include <iostream>

//program to convert Colombian Pesos, Brazilian Reais, and Peruvian Soles to US Dollars
int main() {

	double pesos, reais, soles, usd;

	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;

	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> reais;

	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;

	//currency conversion rates
	usd = pesos * 0.049 + reais * 0.1305 + soles * 0.1144;

	std::cout << "US Dollars = $" << usd << ".\n";

	return 0;

}