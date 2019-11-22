#include <fstream>
#include <iostream>
#include <string>

int main(void)
{
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	fout.open("OUTPUT.TXT");

	if (fin.is_open())
	{
		getline(fin, str);
	}
	if (!str.empty())
	{
		if (fout.is_open())
		{
			fout << str;
		}
	}
}