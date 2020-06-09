#include <iostream>
#include "GameTable.h"
int main()
{
    using namespace std;
    cout<<"Welcom to the Deck Game\n";

    GameTable m_game;
    m_game.showDeck();

    m_game.Shuffle();
    m_game.showDeck();

    //add player
    m_game.addPlayer("Jay",1000);
    //give top 3 card to the player

    Player player_jay = m_game.getPlayerList().front();
    m_game.dealCardsToPlayer(player_jay);
    player_jay.showHandCards();
    m_game.showDeck();

    return 0;
}