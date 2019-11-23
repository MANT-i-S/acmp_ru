#include <fstream>

int main(void)
{
	int start = 0;
	int next = 0;
	int base = 0;
	int find = 0;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		fin >> start >> next >> find;
		base = next - start;
		while(find-- > 1)
		{
			start += base;
		}
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
			fout << start;
	}
}