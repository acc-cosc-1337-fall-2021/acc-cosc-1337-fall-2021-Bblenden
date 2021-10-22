//h
#include<string>
#include<iostream>
#include<vector>

using std::string; using std::vector;

class TicTacToe
{
public:
    // checks to see if the board is full
    bool game_over();
    // sets first player to a string (preferably X or O otherwise it won't work properly)
    void start_game(string first_player);
    // Allows the player to choose where to play
    void mark_board(int position);
    // returns the player variable
    string get_player()const;
    // displays the board
    void display_board()const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    vector<string> pegs = vector<string>(9," ");

};
