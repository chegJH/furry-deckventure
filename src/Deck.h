#ifndef DECK
#include <vector>
#include <iostream>
#include <memory>
#include "Card.h"
using namespace std;

class Deck
{
    vector<Card> cards;

public:

    Deck()
    { //form a new pack of deck
        for (size_t i = 0; i < 4; ++i)
            for (size_t j = 0; j < 14; ++j)
            {
                cards.push_back(Card(i,j));
            }
    }
    void Shuffle();
    int size(){return cards.size();}
    Card DrawFromTop();
    Card& DrawFromN(size_t nthCard);

    vector<Card>& getCards() { return cards; }
};
#endif 