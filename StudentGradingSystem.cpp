#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students for which the data is to be entered: ";
    cin >> n;
    cin.ignore(); // Ignore the newline character

    string name;
    int marks[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Name: ";
        getline(cin, name); // Read the name with spaces
        cout << "Marks: ";
        cin >> marks[i];
        cin.ignore();
    }

    int max, min, avg = 0;
    max = marks[0];
    min = marks[0];

    for (int i = 0; i < n; i++)
    {
        if (max <= marks[i])
        {
            max = marks[i];
        }
        if (min >= marks[i])
        {
            min = marks[i];
        }
        avg += marks[i];
    }

    cout << "Average marks of the class is: " << avg / n << endl;
    cout << "Minimum marks of the class is: " << min << endl;
    cout << "Maximum marks of the class is: " << max << endl;
}
