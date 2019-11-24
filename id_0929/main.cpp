#include <fstream>

int main(void)
{
	std::ifstream fin;
	std::ofstream fout;
	long long total = 0;
	long long mod = 0;
	long long min = 0;
	unsigned long long max = 0;

	fin.open("INPUT.TXT");
	if (fin.is_open())
	{
		fin >> total;
		min = total / 6;
		max = total * 6;
		mod = total % 6;
			if (mod == 5)
				min += 2;
			else if (mod == 4)
				min += 3;
			else if (mod == 3)
				min += 4;
			else if (mod == 2)
				min += 5;
			else if (mod == 1)
				min += 6;
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
			fout << min << " " << max;
	}
}