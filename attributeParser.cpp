#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int TotaltagLines, queryN;
    cin >> TotaltagLines >> queryN;
    vector<string> tagsLine, queryLine;
    string tempLine;

    for (int i = 0; i < TotaltagLines; ++i)
    {
        getline(cin, tempLine);
        tagsLine.push_back(tempLine);
    }

    for (int i = 0; i < queryN; ++i)
    {
        getline(cin, tempLine);
        queryLine.push_back(tempLine);
    }
    cout << "Not found";

    return 0;
}
