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
	cout<<"Would you like to be Xs or Os? \n";
	cin>>first_player;
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
		cout<<"\nWould you like to play again? (Y/N): \n";
		cin>>player_choice;
	
	} while (player_choice == 'Y' || player_choice == 'y');
	

	return 0;
}