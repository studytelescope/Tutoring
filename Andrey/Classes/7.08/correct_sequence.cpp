#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string get_correct_string(string s) // принимаем 2413
{
    string result = "";
    vector<int> temp;
    for (int i = 0; i < s.length(); i++)
        temp.push_back(int(s[i]));

    while (temp.size() != 0)
    {
        char biggest_elem = 0;
        int biggest_number_index = 0;

        for(int i = 0; i < temp.size(); i++) // ищем самый большой элемент и его номер в векторе
            if(temp[i] > biggest_elem)
            {
                biggest_elem = temp[i];
                biggest_number_index = i;
            }

        result = result + string(&biggest_elem, 1);// преобразую наибольший элемент вектора в строку и добавляю к результирующей строке
        temp.erase(temp.begin() + biggest_number_index); // удаляю самый большой элемент из вектора.
    }

//    sort(result.begin(), result.end());

    return result; // вернуть должны 4321
}

int main()
{
    string rare_string = "241379856";
    cout << get_correct_string(rare_string) << endl;
}

