#include <fstream>
#include <string>

static void sort(int arr[3])
{
	int tmp = 0;
	int check = 1;

	while(check)
	{
		int i = 0;
		int j = 1;
		while(j <= 2)
		{
			check = 0;
			if(arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				check++;
			}
			i++;
			j++;
		}
	}
}

int main(void)
{
	std::string str;
	std::ifstream fin;
	std::ofstream fout;
	int price[3];
	int amount[3];

	fin.open("INPUT.TXT");
	if(fin.is_open())
	{
		for(int i = 0; i < 3; i++)
		{
		if(fin >> str)
			price[i] = (stoi(str));
		}
		for(int i = 0; i < 3; i++)
		{
		if(fin >> str)
			amount[i] = (stoi(str));
		}
		sort(price);
		sort(amount);
		int total = 0;
		for(int i = 2; i >= 0; i--)
			total += price[i] * amount[i];
		fout.open("OUTPUT.TXT");
		if(fout.is_open())
			fout << total;
	}
}