#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	TicTacToeManager manager;
	TicTacToe game;

	string first_player;
	char player_choice;
	

	cout<<"Welcome to Tic Tac Toe! \n-----------------------------\n\n";

	int correct_choice = 0;
	do
	{
		cout<<"Would you like to be Xs or Os? \n";
		cin>>first_player;

		if (first_player == "X" || first_player == "O")
		{
			correct_choice = 1;

		}
		else
		{
			correct_choice = 0;
		}

	} while (correct_choice == 0);
	

	

	do
	{
		game.start_game(first_player);
		
		while(game.game_over() == false)
		{
			cin>>game;
			cout<<game;
		}

		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(o, x, t);
		cout<<" O wins: "<<o;
		cout<<" X wins: "<<x;
		cout<<" T wins: "<<t<<"\n";

		if (game.get_winner() == "X" || game.get_winner() == "O")
		{
			cout<<"\nThe winner is "<<game.get_winner();
		}
		else if (game.get_winner() == "C")
		{
			cout<<"\nLooks like the game is a tie!";
		}
		cout<<"\nWould you like to play again? (Y/N): \n";
		cin>>player_choice;
	
	} while (player_choice == 'Y' || player_choice == 'y');

	cout<<manager;

	return 0;
}