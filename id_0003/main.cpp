#include <fstream>
#include <string>

int main(void)
{
	std::string str;
	std::ifstream fin;
	std::ofstream fout;
	long long num = 0;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		if(getline(fin, str))
			num = stoi(str);
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
			fout << num * num;
	}
}