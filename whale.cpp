#include <iostream>
#include <vector>
#include <string>

//programme that extracts vowels from a phrase, doubling 'e' and 'u', making it sound like whale language
int main() {

    //input
    std::string phrase = "turpentine and turtles";

	//vector to store vowels and later the result
    std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
    std::vector<char> result;

	//loop through phrase and extract vowels
    for (int i = 0; i < phrase.size(); i++) {

		//nested loop to check if character is a vowel
        for (int j = 0; j < vowels.size(); j++) {

			//if character is a vowel, add to result
            if (phrase[i] == vowels[j]) {

                result.push_back(phrase[i]);
                
				//double 'e' and 'u'
                if (phrase[i] == 'e' || phrase[i] == 'u') {

                    result.push_back(phrase[i]);

                }

            }

        }

    }

	//output result
    for (int c = 0; c < result.size(); c++) {

        std::cout << result[c];

    }

    std::cout << "\n";

}