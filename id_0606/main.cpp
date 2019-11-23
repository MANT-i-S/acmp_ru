#include <fstream>
#include <string>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		fin >> a >> b >> c;
		fout.open("OUTPUT.TXT");
		if(a < b+c && b < a+c && c < a+b)
			fout << "YES";
		else
			fout << "NO";
	}
}