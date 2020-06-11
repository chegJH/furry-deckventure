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
    m_game.addPlayer("Tina",1);

    for(Player& p:m_game.getPlayerList()){
        m_game.dealCardsToPlayer(p);
        p.showHandCards();
    }
    m_game.showDeck();

    return 0;
}