#pragma once
#include "Core/Dealer.h"
#include "Core/Player.h"
#include <array>

using namespace std;

const int MaxPlayerNumber = 3;
class Table
{
    enum GameStatus{PLAYING, ACTIVE, WAITING};

    Dealer dealer_;
    array<Player*,MaxPlayerNumber> playerList_;
    unsigned int emptySeatIndex = 0;

    unsigned int tableNumber_ = 0;
    GameStatus status_ = GameStatus::WAITING;

    
    public:
    Table();
    ~Table();
    void join(Player&);
    void leave(Player&);
    void start();
};