#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	
	TicTacToe game;

	string first_player;
	char player_choice;
	int position;
	bool game_over;

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
		
		do
		{
			cout<<"\n"<<game.get_player()<<"! Pick a space, 1-9.\n";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			game_over = game.game_over();
		}while(game_over == false);

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
	

	return 0;
}