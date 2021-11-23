//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <vector>
#include <memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData d);
    void save_game(std::unique_ptr<TicTacToe>& game);
    friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
    void get_winner_total(int& o, int& x, int& t);
    ~TicTacToeManager();

private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_wins {0};
    int o_wins {0};
    int ties {0};
    TicTacToeData data;

    void update_winner_count(std::string winner);

};


#endif
