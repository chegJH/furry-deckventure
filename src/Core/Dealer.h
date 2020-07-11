#ifndef DEALER_H
#define DEALER_H
#include "Deck.h"
#include "Player.h"

class Dealer : public Person
{

    double houseMoney_ = 1000;
    Deck deck_;

public:
    Dealer():Dealer(std::string("DefaultDealer")){}
    
    Dealer(string name) : Person(name)
    {
        deck_.init();
    }

    void dealCardTo(Player &player);
    void takeMoneyFrom(Player &player, unsigned int value);
    void giveMOneyTo(Player &player, unsigned int value);
};
#endif
