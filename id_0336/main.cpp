#include <iostream>
#include <string>

int main(void)
{
	std::string str;

	getline(std::cin, str);
	int fl = 1;
	int max = 1;
	int i = 0;
	while(str[i])
	{
		if(2 == str[i] - 48 && fl > 1)
			fl--;
		else if(1 == str[i] - 48)
			fl++;
		else if(2 == str[i] - 48 && fl == 1)
			max++;
		if(max < fl)
			max = fl;
		i++;
	}
	std::cout << max;
}