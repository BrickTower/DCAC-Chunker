#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string test = "a";
    for (size_t i = 0; i < (test.length()+5); i++)
    {
        char c = test[i];
        int ascii = (int)c;
        cout << ascii << endl;
    }

    return 0;
}