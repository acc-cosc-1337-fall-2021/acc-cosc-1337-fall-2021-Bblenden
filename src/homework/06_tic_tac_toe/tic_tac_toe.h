//h
#include<string>
#include<iostream>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

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
    string get_winner()const;
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    TicTacToe(int size):pegs(size*size, " "){};

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    string player;
    string winner;

protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

};

#endif
