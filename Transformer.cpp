#include <iostream>
#include <fstream>
#include <string>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> process(string input)
{
    int n = input.length();
    int limit = 850;
    vector<string> response;
    string output = "";

    for (int i = 0; i < n; i++)
    {

        if (input[i] == '\n')
        {
            if (input[i - 1] == '\n')
            {
                output += "";
                input.erase(input[i]);
                response.push_back(output);
                output = "";
            }
            else
            {
                output += ""; // END THE LINE
                response.push_back(output);
                output = ""; // RESET
            }
        }
        else if (input[i] == ' ' or i == (n - 1) or input[i] == '.' or input[i] == '!' or input[i] == '?')
        {
            output += "\n"; // END THE LINE
            response.push_back(output);
            output = ""; // RESET
        }
        else
        {
            output += input[i];
        }
    }

    for (vector<string>::iterator i = response.begin(); i != response.end();)
    {
        if (i->empty())
        {
            i = response.erase(i);
        }
        else
        {
            ++i;
        }
    }

    return response;
}

int main()
{
    string str = "";
    string fileOutput = "filename.txt";
    ofstream myFile(fileOutput);
    for (int i = 0; i <= 860; i++)
    {
        str += "Lorem Ipsum.\n\nLorem Ipsum."; // INPUT
    }

    vector<string> arr;

    arr = process(str);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << i << ": " << arr[i] << endl;
    }

    vector<string> backup; // BACKUP THE ARRAY
    backup = arr;

    if (arr.size() > 850)
    {

        ofstream backupFile("backupFile.txt");
        for (const string &i : backup)
        {
            backupFile << i;
        }

        backupFile.close();

        int size = (arr.size() - 850); // POP OUT ANY DATA
        for (int i = 0; i < size; i++)
        {
            arr.pop_back();
        }
    }

    ostream_iterator<string> outputIterator(myFile, "");
    copy(begin(arr), end(arr), outputIterator);

    if (arr.size() > 850)
    {
        cout << "Too Large!" << endl;
    }

    myFile.close();

    return 0;
}