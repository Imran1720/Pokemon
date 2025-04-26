#pragma once

#include <string>
using namespace std;

namespace N_Pokemon
{
	struct Move
	{
		string moveName;
		int attackPower;

		Move(const string& _name, int _power)
		{
			moveName = _name;
			attackPower = _power;
		}
	};
}

