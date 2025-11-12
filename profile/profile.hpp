#include <vector>

class Profile {
private:
	// profile class private attributes
	std::string name;
	int age;
	std::string city;
	std::string country;
	std::string pronouns;
	std::vector<std::string> hobbies;

public:
	//declaring constructor, pronouns set to they/them by default
	Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");
	std::string view_profile();
	void add_hobby(std::string new_hobby);

};