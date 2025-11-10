#include <iostream>

// program to calculate weight on different planets
int main() {

    int planet, weight;
    std::string planet_name;

    std::cout << "What is your earth weight?\n";
    std::cin >> weight;
    std::cout << "enter the number of planet you want to land on:\n";
    std::cout << "   1. Mercury   2.Venus   3. Mars    4. Jupiter\n";
    std::cout << "   5. Saturn  6. Uranus  7. Neptune\n\n";
    std::cin >> planet;

    switch (planet) {

    case 1:
        weight = weight * 0.38;
        planet_name = "Mercury";
        break;
    case 2:
        weight = weight * 0.91;
        planet_name = "Venus";
        break;
    case 3:
        weight = weight * 0.38;
        planet_name = "Mars";
        break;
    case 4:
        weight = weight * 2.34;
        planet_name = "Jupiter";
        break;
    case 5:
        weight = weight * 1.06;
        planet_name = "Saturn";
        break;
    case 6:
        weight = weight * 0.92;
        planet_name = "Uranus";
        break;
    case 7:
        weight = weight * 1.19;
        planet_name = "Neptune";
        break;
    default:
        std::cout << "please enter correct planet number";

    }

    std::cout << "Your weight on " << planet_name << " is " << weight << ".\n\n";

    return 0;

}