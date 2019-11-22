#include <fstream>
#include <iostream>
#include <string>

int main(void)
{
	int count = 0;
	char str[11];
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	fout.open("OUTPUT.TXT");

	if (fin.is_open())
	{
		fin >> str;
	}
	if (*str)
	{
		count = atoi(str);
		count++;
		if (fout.is_open())
		{
			fout << count;
		}
	}
}