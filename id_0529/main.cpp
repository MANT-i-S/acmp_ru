#include <fstream>
#include <string>
#include <cmath>

int main(void)
{
	std::string str;
	std::ifstream fin;
	std::ofstream fout;
	int ar[4];
	int a = 0;
	int b = 0;
	double c = 0;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		for(int i = 0; i < 4; i++)
		{
			fin >> str;
			ar[i] = stoi(str);	
		}
		if(ar[0] < ar[2])
			a = ar[2] - ar[0];
		else
			a = ar[0] - ar[2];
		if(ar[1] < ar[3])
			b = ar[3] - ar[1];
		else
			b = ar[1] - ar[3];
		c = (a * a) + (b * b);
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
		{
			fout << std::fixed << sqrt(c);
		}
	}
}