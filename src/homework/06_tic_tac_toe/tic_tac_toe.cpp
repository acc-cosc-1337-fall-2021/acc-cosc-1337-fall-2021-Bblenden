#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <istream>
#include <ostream>
#include <iostream>
#include "tic_tac_toe_manager.h"

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
    if((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"))
    {
        return true;
    }
    else if((pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"))
    {
        return true;
    }
    else if((pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") || (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"))
    {
        return true;
    }
    else if((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"))
    {
        return true;
    }
    else if((pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }    
}

bool TicTacToe::check_diagonal_win()
{
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else if((pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") || (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }   
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
    for (auto i = 0; i < 9; i++)
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
    for (int i = 0; i < 9; i++)
    {
        pegs[i] = " ";
    }
    
}


std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for(std::size_t i=0; i < game.pegs.size(); i+=3)
    {
        out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
    }

    return out;
}
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    auto position = 0;

    while(position < 1 || position > 9)
    {
        cout<<"Enter a position from 1-9 ";
        in>>position;
    }
    game.mark_board(position);
    return in;
}