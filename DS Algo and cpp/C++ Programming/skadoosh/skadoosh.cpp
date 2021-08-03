#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int character, choice2, choice3, choice4, choice5, choice6;
    cout << "Enter 1 to fight TAI LUNG, 2 to fight SHEN or 3 to fight KAI \n"
         << endl;
    cin >> character;
    if (character == 1 /*Tai Lung*/)
    {
        cout << "You chose TAI LUNG." << endl;
        cout << "You're facing TAI LUNG. press 1 to ATTACK, 2 to DEFEND or 3 to use SKADOOSH" << endl;
        cin >> choice2;
        if (choice2 == 1)
        {
            cout << "You ATTACKED TAI LUNG. He punched you and you got hurt." << endl;
            exit(0);
        }
        else if (choice2 == 2)
        {
            cout << "You DEFENDED Tai Lung's blows. He is weakened and you SKADOOSHED him anyway" << endl;
            exit(0);
        }
        else if (choice2 == 3)
        {
            cout << "SKADOOSH. Game OVER." << endl;
            exit(0);
        }
    }
    else if (character == 2 /* Shen */)
    {
        cout << "You chose SHEN" << endl;
        cout << "You are facing one of SHEN's CANNONS." << endl;
        cout << "Press 1 to ATTACK, 2 for HEAVY ATTACK and 3 to conjure INNER PEACE " << endl;
        cin >> choice3;
        if (choice3 == 1)
        {
            cout << "You ATTACKED Shen. He smacks you with his wings and you are hurt now." << endl;
            exit(0);
        }
        else if (choice3 == 2)
        {
            cout << "You bumped Shen with your belly. He is hurt but not dead." << endl;
            exit(0);
        }
        else if (choice3 == 3)
        {
            cout << "Shen fired his cannon, but thanks to inner peace you aimed the ball back at him. Shen is blown up into pieces and is dead." << endl;
            exit(0);
        }
    }
    else if (character == 3 /*Kai*/)
    {
        cout << "You SKADOOSHED yourself with KAI and the others bring you back with CHI. Mission Successful!" << endl;
    }
    return 0;
}