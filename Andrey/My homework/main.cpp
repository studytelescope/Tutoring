#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

struct interval
{
    int first;
    int second;
};

string delete_subinterwal(string s, interval boarders)
{
    string result = "";

    for(int i = 0; i < boarders.first; i++)
        result += s[i];

    for(int j = boarders.second + 1; j < s.size(); j++)
        result += s[j];

    return result;
}

struct interval max_subinterval(string arr)
{
    struct interval result = {0, 0};
    int counter = 1;
    int curr_begin = 0;
    int curr_end= 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(isdigit(arr[i]))
        {
            if(counter == 1)
                curr_begin = i;

            curr_end = i;
            counter++;

            if(counter > result.second - result.first)
                result = {curr_begin, curr_end};
        }
        else
            counter = 1;
    }
    return result;
}

int main()
{
    string base_string = "abcd123def32ghried5739h48512312kopl";
    auto my_interwal = max_subinterval(base_string);
    cout << delete_subinterwal(base_string, my_interwal) << endl;
    return 0;
}