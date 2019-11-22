#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int checkwinner(std::string str, int tasks)
{
	int pts1 = 0;
	int pts3 = 0;
	int pts5 = 0;
	int penal1 = 0;
	int penal3 = 0;
	int penal5 = 0;
	int i = 0;
	int winner = 0;
	std::string word;
	std::istringstream ss(str);
	std::vector<int> v;
	while(tasks--)
	{
		ss >> word;
		i = stoi(word);
		v.push_back(i);
		pts5 += i;
		penal5 += pts5;
	}
	for(tasks = v.size() - 1; tasks >= 0; tasks--)
	{
		pts3 += v[tasks];
		penal3 += pts3;
	}
	sort(v.begin(), v.end());
	for(tasks = 0; tasks < v.size(); tasks++)
	{
		pts1 += v[tasks];
		penal1 += pts1;
	}
	if(pts1 > 300 && pts3 > 300 && pts5 > 300)
	{
		// At this point I realized something wrong here... xD
	}
	else
	{
		
	}
	std::cout << "pts1 = " << pts1 << '\n'; //remove
	std::cout << "penal1 = " <<penal1 << '\n'; // remove
	return(winner);
}

int main(void)
{
	int tasks;
	int winner = 0;
	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open("INPUT.TXT");
	fout.open("OUTPUT.TXT");

	if (fin.is_open())
	{
		getline(fin, str);
		tasks = std::stoi(str);
		getline(fin, str);
	}
	if (!str.empty())
	{
		if (fout.is_open())
		{
			fout << checkwinner(str, tasks);
		}
	}
}