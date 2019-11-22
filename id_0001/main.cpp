#include <fstream>
#include <iostream>
#include <string>

int main(void)
{
	int num = 0;
	int sum = 0;
	char str[14];
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	fout.open("OUTPUT.TXT");

	if (fin.is_open())
	{
		for(int i = 0; i < 2; i++)
		{
			fin >> str;
			num = atoi(str);
			sum += num;
		}
	}
	if (fout.is_open())
	{
		fout << sum;
	}
}