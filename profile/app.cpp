#include <iostream>
#include "profile.hpp" 

//program entry point creating and viewing a profile
int main() {

	//profile class object attribute initialization
	Profile maira("Maira Zalyte", 30, "Bradford", "UK", "she/her");

	//adding mathods as attributes to profile
	maira.add_hobby("working");
	maira.add_hobby("driving to work");
	maira.add_hobby("doing algorithm samples");
	std::cout << maira.view_profile();

}