#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int compare_str(void const *a,void const *b) {
    char const *aa=(char const *)a; // привожу агрумент "а"  к типу "указатель на char
    char const *bb=(char const *)b; // привожу агрумент "b"  к типу "указатель на char

    if(*aa == *bb)
        return 0;
    else if(*aa > *bb)
        return 1;
    else return -1;
}

int main() {
        char test_string[] = "bcdaefg";
    qsort(test_string, 7,sizeof(test_string[0]),compare_str);

    for(int i = 0; i < 7; i++)
        cout << test_string[i];
}
