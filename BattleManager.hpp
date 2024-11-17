class Player;
class Pokemon;

class BattleManager
{

	public :
		void StartBattle(Player& _player, Pokemon& _wildPokemon);

	private :
		void Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon);

		void HandleBattleOutcome(Pokemon& _player, bool _playerWon);
};