#include "GameTable.h"

void GameTable::showDeck()
{
    game_deck->showDeck();
}

void GameTable::addPlayer(string name, double money = 50)
{
    Player newPlayer(name, money);
    playerList.push_back(newPlayer);
}

void GameTable::dealCardsToPlayer(Player &p)
{
    dealer.dealCard(p);
}