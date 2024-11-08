#include <iostream>

using namespace std;

int main()
{
    system("cls");

    string pokemonTrainer_Name;

    for (int i = 0; i < 45; i++)
    {
        cout << "*";
    }

    cout << "\n\t\tPOKEMON" << endl;

    for (int i = 0; i < 45; i++)
    {
        cout << "*";
    }
    cout << "\n\nTrainer! Before you embark on your journey," << endl;
    cout << "the Pokemon world needs to know who you are!" << endl;
    cout << "\nTime to step up and tell us your name." << endl;
    cout << "\nAnd remember, a great name is the start of " << endl;
    cout << "every great adventure!" << endl << endl;

    for (int i = 0; i < 45; i++)
    {
        cout << "-";
    }

    cout << "\n\nEnter your name: ";
    cin >> pokemonTrainer_Name;

    system("cls");
    cout << "\nGreat start, " << pokemonTrainer_Name << "! Looks like you've mastered the opening of every code adventure."<<endl;
    cout << "Keep this up, and you'll be a coding master in no time!"<<endl;
	
	return 0;
}