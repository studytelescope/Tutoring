#include <iostream>
#include <string>

using namespace std;

int main()
{
    string short_string = ""; // A4B3D1E1H17
    string long_string = "AAAABBBDEHHHHHHHHHHHHHHHHH";
    char current_symbol = long_string[0];
    int counter = 0;

    for(int i = 0; i < long_string.size(); i++)
    {
        if(current_symbol != long_string[i])
        {
            short_string += current_symbol + to_string(counter);
            counter = 1;
            current_symbol = long_string[i];
            continue;
        }
        counter += 1;
    }

    short_string += current_symbol + to_string(counter);
    cout << short_string << endl; // A4B3D1E1H17

    return 0;
}
