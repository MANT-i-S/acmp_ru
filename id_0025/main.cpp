#include <fstream>
#include <string>

int main(void)
{
	int a = 0;
	int b = 0;
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		if(getline(fin, str))
			a = stoi(str);
		if(getline(fin, str))
			b = stoi(str);
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
		{
			if(a < b)
				fout << "<";
			else if(a > b)
				fout << ">";
			else
				fout << "=";
		}
	}
}