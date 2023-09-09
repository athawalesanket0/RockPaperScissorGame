#include <bits/stdc++.h>
using namespace std;
void game(int random_no, char user)
{
    if (user == 'E' || user == 'e')
        return;
    char comp;

    //   initialisation of computer input

    if (random_no == 1) //   initialising Rock for 1
        comp = 'r';
    else if (random_no == 2) //   initialising Paper for 2
        comp = 'p';
    else // if (random_no == 3)   initialising Scissor for 3
        comp = 's';

    cout << "Your input is " << user << " & "
         << "Computer input is " << comp << endl;
    cout << "Result: ";

    //  compare user and computer input
    if (user == comp || comp - user == 32)
        cout << "Draw" << endl;
    else if ((user == 'r' || user == 'R') && comp == 's')
        cout << "Congrats! You win" << endl;
    else if ((user == 's' || user == 'S') && comp == 'p')
        cout << "Congrats! You win" << endl;
    else if ((user == 'p' || user == 'P') && comp == 'r')
        cout << "Congrats! You win" << endl;
    else if (user == 'E')
        return;
    else
        cout << "Oops! You lost... better luck next time..." << endl;
}

int main()
{
    int random_no;
    char user;
    srand(time(0));
    random_no = rand() % 3 + 1; //  random number generate here between 1 to 3
    while (user != 'E' && user != 'e')
    {
        cout << "Enter 'r' or 'R' for Rock, 'p' or 'P' for Paper & 's' or 'S' for Scissor : " << endl;
        cout << "To exit the game enter: 'e' or 'E' " << endl;
        cin >> user; //  taking user input
        game(random_no, user);
    }
    return 0;
}