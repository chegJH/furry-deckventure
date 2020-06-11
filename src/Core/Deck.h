#ifndef DECK
#include <vector>
#include <iostream>
#include <memory>
#include "Card.h"
#include "UnCopyable.h"
using namespace std;

class Deck
{
    vector<shared_ptr<Card>> cards;
    size_t topCounter = 0;

public:
    // Deck& operator&(const Deck&) = delete;
    Deck()
    { //form a new pack of deck
        for (size_t i = 0; i < 4; ++i)
            for (size_t j = 0; j < 14; ++j)
            {
                cards.push_back(make_shared<Card>(i,j));
            }
    }
    void Shuffle();
    int size(){return cards.size();}
    shared_ptr<Card> DrawFromTop();
    // Card& DrawFromN(size_t nthCard);

    // vector<shared_ptr<Card>>& getCards() { return cards; }
    // shared_ptr<Card> getCards() {return cards;}
    void showDeck();
};
#endif 