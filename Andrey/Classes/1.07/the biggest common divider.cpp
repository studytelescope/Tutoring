#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_the_biggest_element(vector<int> c)
{
	int x = c[0];
	for (int i = 0; i < c.size(); i++)
	{
		if (x < c[i])
			x = c[i];
	}
	return x;
}

int get_the_biggest_common_divider(int a, int b)
{
	// находим максимальный делитель Х первого числа
	vector<int> a_dividers = get_all_dividers(a);
	temp = get_the_biggest_element(a_dividers);

	// тут будет цикл

	// если Х есть делитель числа b, то задача решена
	if (b % temp == 0)
		return temp;

	// если Х не делитель числа b, то надо удалить Х из a_dividers и найти новый Х
	// делаем все то же самое, то есть строку 24
}

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
	int a = 64;
	int b = 72;
	cout << get_the_biggest_common_divider(a, b);
}
