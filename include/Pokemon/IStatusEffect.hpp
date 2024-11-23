#pragma once
#include "../include/Pokemon/Pokemon.hpp"
#include <string>

using namespace N_Pokemon;
using namespace std;

class IStatusEffect
{
	public:
	virtual void ApplyEffect(Pokemon* target) = 0;

	virtual string GetEffectName() = 0;

	virtual bool TurnEndEffect(Pokemon* target) = 0;

	virtual void ClearEffect(Pokemon* target) = 0;

	virtual ~IStatusEffect() = default;
};