#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> get_all_dividers(int a)
{
	vector <int> dividers;
	int b = 1;
	for (b; b != a + 1; b = b + 1)
	{
		if (a % b == 0)
		{
			dividers.push_back(b);
		}

	}
	return dividers;
}

int main()
{
	int number_1 = 14;
	int number_2 = 134;
	int number_3 = 71;

	vector<int> result_1 = get_all_dividers(number_1);
	vector<int> result_2 = get_all_dividers(number_2);
	vector<int> result_3 = get_all_dividers(number_3);

	for (int i = 0; i < result_1.size(); i++)
	{
		cout << result_1[i] << endl;
	}

	for (int i = 0; i < result_2.size(); i++)
	{
		cout << result_2[i] << endl;
	}

	for (int i = 0; i < result_3.size(); i++)
	{
		cout << result_3[i] << endl;
	}
}
