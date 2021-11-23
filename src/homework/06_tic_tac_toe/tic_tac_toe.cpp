#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <istream>
#include <ostream>
#include <iostream>
#include "tic_tac_toe_manager.h"
#include "math.h"

using namespace std; 



bool TicTacToe::game_over()
{
    if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}



void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player()const
{
    return player;
}

string TicTacToe::get_winner()const
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_winner()
{
    if (get_player() == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }

    else if (player == "O")
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    bool over;
    for (auto i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            over = false;
            break;
        }
        else
        {
            over = true;
        }
    }
    return over;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
    
}


std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for(std::size_t i=0; i < game.pegs.size(); i+=std::sqrt(game.pegs.size()))
    {
        out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2];

        if(game.pegs.size() == 16) {out<<"|"<<game.pegs[i+3];}

        out<<"\n";
    }

    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    auto position = 0;
    cout<<game.pegs.size()<<"n";
    while(position <1 || position > game.pegs.size())
    {
        cout<<"Enter a position from 1-"<<game.pegs.size()<<": ";
        in>>position;
    }

    game.mark_board(position); 
    

}
