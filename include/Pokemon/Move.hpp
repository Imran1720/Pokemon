#pragma once

#include <string>
using namespace std;

namespace N_Pokemon
{
	struct Move
	{
		string name;
		int power;

		Move(const string& _name, int _power)
		{
			name = _name;
			power = _power;
		}
	};
}