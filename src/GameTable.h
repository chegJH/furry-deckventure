#include "Dealer.h"
#include "Player.h"
#include <iostream>
#include <vector>
using namespace std;

const int maxNumOfPlayer = 3;
class GameTable
{
    Dealer dealer;
    vector<Player> playerList;
    Deck* game_deck;
    
public:
    GameTable(){
        dealer = Dealer("DealerDefault",0);
        game_deck = dealer.getDeck();
    }
    void showDeck();
    void showCard(Card& card);
    void getNewDeckOfCard();
    void Shuffle()
    {
        game_deck->Shuffle();
    }
    void addPlayer(string name,double money);
    void dealCardsToPlayer(Player& p);
    vector<Player>& getPlayerList(){return playerList;}
    
    
    
};
