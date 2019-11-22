#include <fstream>

int main(void)
{
	std::ofstream fout;

	fout.open("OUTPUT.TXT");
	if (fout.is_open())
	{
		fout << "1";
	}
}