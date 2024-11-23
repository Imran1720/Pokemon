#pragma once
#include <string>

namespace N_Pokemon
{
class Pokemon;
}

class IStatusEffect
{
	public:
	virtual void ApplyEffect(N_Pokemon::Pokemon* target) = 0;

	virtual std::string GetEffectName() = 0;

	virtual bool TurnEndEffect(N_Pokemon::Pokemon* target) = 0;

	virtual void ClearEffect(N_Pokemon::Pokemon* target) = 0;

	virtual ~IStatusEffect() = default;
};