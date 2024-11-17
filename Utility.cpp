#include "Utility.hpp"
#include <iostream>
#include <limits>

using namespace std;

void Utility::ClearScreen()
{
	system("cls");
}

void Utility::PlayerWaitResponse()
{
	cin.get();
}

void Utility::clearInputBuffer()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
