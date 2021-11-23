//h
#include<string>
#include<iostream>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H



class TicTacToe
{
public:
    // checks to see if the board is full
    bool game_over();
    // sets first player to a string (preferably X or O otherwise it won't work properly)
    void start_game(std::string first_player);
    // Allows the player to choose where to play
    void mark_board(int position);
    // returns the player variable
    std::string get_player()const;
    // displays the board
    std::string get_winner()const;
    std::vector<std::string> get_pegs()const{return pegs;}
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    TicTacToe(int size):pegs(size*size, " "){};
    TicTacToe(std::vector<std::string> p, std::string win) : pegs(p), winner(win){}

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    std::string player;
    std::string winner;

protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

};

#endif
