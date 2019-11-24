#include <iostream>
#include <string>

int main(void)
{
	std::string str;
	int x = 0;
	int y = 0;

	std::cin >> str;
	x = str[0] - 64;
	y = str[1];
	if(x % 2 == 0 && y % 2 != 0)
		std::cout << "WHITE";
	else if(y % 2 == 0 && x % 2 != 0)
		std::cout << "WHITE";
	else
		std::cout << "BLACK";
}