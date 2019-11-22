#include <fstream>
#include <string>

int main(void)
{
	int ppl;
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		getline(fin, str);
		ppl = stoi(str);
		if(ppl == 2 || ppl == 1)
			ppl--;
		else if(ppl % 2 == 0)
			ppl /= 2;
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
			fout << ppl;
	}
}