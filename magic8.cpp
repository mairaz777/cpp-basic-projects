#include <iostream>

//programme shows random answers like a magic 8-ball
int main() {

    std::cout << "MAGIC 8-BALL:\n\n";

	//seed random number generator
    srand(time(NULL));

	//generate random number between 0 and 9
    int answer = std::rand() % 10;

    switch (answer) {
    case 0:
        std::cout << "No. Not really.\n";
        break;
    case 1:
        std::cout << "Val!\n";
        break;
    case 2:
        std::cout << "You are an adult.\n";
        break;
    case 3:
        std::cout << "Four R's, my friend: Reduce, reuse, recycle, Rugby.\n";
        break;
    case 4:
        std::cout << "Nomo FOMO.\n";
        break;
    case 5:
        std::cout << "Yas.\n";
        break;
    case 6:
        std::cout << "Work it, dawg!\n";
        break;
    case 7:
        std::cout << "Carpe dayum!\n";
        break;
    case 8:
        std::cout << "Cha-Chinga!\n";
        break;
    case 9:
        std::cout << "Yaaaaas Kween!\n";
        break;
    default:
        std::cout << "It's up to your louck.\n";
        break;
    }

    return 0;

}