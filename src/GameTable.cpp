#include "GameTable.h"

void GameTable::showDeck()
{
    cout<<"\nSHOW DECK:\n";
    for (auto& crd : game_deck->getCards())
    {
        cout<<crd.getSuit()<<crd.getValue()<<' ';
    }
}

void GameTable::addPlayer(string name, double money = 50){
    Player newPlayer(name,money);
    playerList.push_back(newPlayer);
}

void GameTable::dealCardsToPlayer(Player& p)
{
        dealer.dealCard(p);
}