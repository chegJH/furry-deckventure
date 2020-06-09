#ifndef DEALER_H
#define DEALER_H
#include "Deck.h"
// #include "Person.h"
#include "Player.h"
#include <memory>

class Dealer:public Person{

    double money;
    Deck* deck;

    public:
    Dealer(){}
    Dealer(string name, double val = 0):Person(name){
        deck = new Deck();
        money = val;
    }
    Deck* getDeck()
    {
        return deck;
    }

    void dealCard(Player& ply)
    {
        Card topCard(deck->DrawFromTop());
        ply.AddHandCard(topCard);
    }



};
#endif
