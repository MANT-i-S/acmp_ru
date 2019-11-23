#include <fstream>
#include <string>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	if (fin.is_open())
	{
		if(fin >> str)
			a = stoi(str);
		if(fin >> str)
			b = stoi(str);
		if(fin >> str)
			c = stoi(str);
		fout.open("OUTPUT.TXT");
		if (fout.is_open())
		{
			if (a >= 94 && b >= 94 && c >= 94 && a <= 727 && b <= 727 && c <= 727)
			{
				if (a >= b && a >= c)
					fout << a;
				else if(b >= a && b >= c)
					fout << b;
				else
					fout << c;
			}
			else
				fout << "Error";
		}
	}
}