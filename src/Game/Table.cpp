#include "Table.h"

Table::Table()
{
}

Table::~Table()
{
    
}
void Table::join(Player& p)
{
    if (status_ == GameStatus::WAITING)
    {
        playerList_[emptySeatIndex++] = &p;
        //TODO: utilise player's deck* to hand card
        if (emptySeatIndex == 3)
        {
            status_ = GameStatus::ACTIVE;
        }
    }
}

void Table::leave(Player& p)
{
}

void Table::start()
{
    if(playerList_.size() == MaxPlayerNumber)
    {
        status_ = GameStatus::PLAYING;
    }else{
        cout<<"No enough player\n";
    }

    for(Player* p :playerList_)
    {
        dealer_.dealCardTo(*p);
    }
}