//cpp
#include "tic_tac_toe_manager.h"

TicTacToeManager::TicTacToeManager(TicTacToeData d) : data(d)
{
    games = data.get_games();

    for(auto&game : games)
    {
        update_winner_count(game->get_winner());
    }
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_wins;
    x = x_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto& game: manager.games)
    {
        out<<*game<<"\n";
    }

    return out;
}

TicTacToeManager::~TicTacToeManager()
{
    data.save_games(games);
}
    
