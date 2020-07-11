// #ifndef DECK
#pragma once
#include <vector>
#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class Deck
{
    public : 
    vector<Card> deck;

    Deck()
    {
        deck = {};
    }
    void init();
    void Shuffle();
    unsigned int getSize();
    Card DrawFromTop();
    Card DrawFromN(unsigned int nthCard);

    // vector<shared_ptr<Card>>& getCards() { return cards; }
    // shared_ptr<Card> getCards() {return cards;}
    void showDeck();
    friend ostream& operator<<(ostream& os, const Deck& deck);
};

// #endif