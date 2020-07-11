#include "Deck.h"
#include <random>
#include <algorithm>

void Deck::init()
{
    deck.reserve(56);
    for (size_t i = 0; i < 4; ++i)
        for (size_t j = 0; j < 14; ++j)
        {
            deck.emplace_back(i,j);
        }
}

//Draw top card from deck.
//the card is removed from deck and return a copy of it. 
Card Deck::DrawFromTop()
{
    Card topCard = deck.back();
    deck.pop_back();
    return topCard;
}
Card Deck::DrawFromN(unsigned int nth_element)
{
    Card nCard = deck[nth_element];
    deck.erase(deck.begin()+nth_element);
    return nCard;
}

int myrandom(int i) { return std::rand() % i; }

void Deck::Shuffle()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(deck.begin(), deck.end(), gen);
}

void Deck::showDeck()
{
    cout<<*this;
}
ostream& operator << (std::ostream& os, const Deck& deck)
{
    cout << "Current valid Card in Deck:\n";
    for (auto card = deck.deck.begin();
         card != deck.deck.end();
         card++)
    {
        os<<*card<<' ';
    }
    cout << "\n";
    return os;
}

unsigned int Deck::getSize(){
    return deck.size();
}