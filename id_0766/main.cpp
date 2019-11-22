#include <fstream>
#include <string>

int main(void)
{
	int n = 0;
	int m = 0;
	int k = 0;
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	fout.open("OUTPUT.TXT");
	if(fin.is_open())
	{
		fin >> n;
		fin >> m;
		fin >> k;
		if(fout.is_open())
		{
			if(n * m >= k)
				fout << "YES";
			else
				fout << "NO";
		}
	}
}