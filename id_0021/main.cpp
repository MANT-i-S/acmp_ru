#include <fstream>
#include <string>

int solve(int a, int b, int c)
{
	int min = 0;
	int max = 0;

	if (a <= b && a <= c)
		min = a;
	else if (b <= a && b <= c)
		min = b;
	else 
		min = c;
	if (a >= b && a >= c)
		max = a;
	else if(b >= a && b >= c)
		max = b;
	else 
		max = c;
	return(max - min);
}

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		fin >> str;
		a = stoi(str);
		fin >> str;
		b = stoi(str);
		fin >> str;
		c = stoi(str);
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
			fout << solve(a, b, c);
	}
}