#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{ // generating the random number
    srand(static_cast<unsigned>(time(nullptr)));
    int random = rand() % 100 + 1;
    int n;
    cout << "welcome" << endl
         << "Guess a number between 1 to 100" << endl;
    cin >> n;
    // checking if user input is correct or not
    if (random == n)
    {
        cout << "\nCongrats you won\n";
    }
    else
    { // if the difference is less than 5 it is close enough
        cout << "\nyou lost \n";
        if (random - n < 5)
        {
            cout << "you were very close to the answer";
        }
        else
        {
            cout << "your guess was too high ";
        }
    }
    char play;
    cout << "do you want to play again" << endl
         << "press 'y' for yes and 'n' for no"<<endl;
    cin >> play;
    if (play == 'y')
    {
        main();
    }
    else
    {
        cout << "thanks for playing";
    }
}
