#include <iostream>
#include <string>

using namespace std;

/*
	Берет все буквы из строчки A и считает, сколько раз каждая из них встречается в этой строчке.
	Затем проделывает ту же операцию со строчкой В.
	После этого сравнивает количество вхождений букв в первой строке и во второй. Если хотя бы для одной буквы
	число вхождений отлично от другой строки, то возвращаем false, если в обеих строках для всех букв количество
	вхождений совпадает, возвращаем true.
*/
bool is_permutation(string A, string B)
{
	// your code
}

int main()
{
	string a = "Hello world";
	string b = "Hello wordl";
	string c = "Helo world";
	string e = "abc";
	string f = "bac";
	string g = "abcc";
	string h = "cabc";
	string p = "aabc";

	cout << is_permutation(a, b) << endl; // true
	cout << is_permutation(a, c) << endl; // false
	cout << is_permutation(e, f) << endl; // true
	cout << is_permutation(e, g) << endl; // false
	cout << is_permutation(g, h) << endl; // true
	cout << is_permutation(h, p) << endl; // false
	cout << is_permutation(a, p) << endl; // false
}
