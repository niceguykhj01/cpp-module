#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << " " << str << std::endl
			  << stringPTR << " " << *stringPTR << std::endl
			  << &stringREF << " " << stringREF << std::endl;

	return (0);
}   