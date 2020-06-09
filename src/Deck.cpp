#include "Deck.h"
#include<random>
// #include <memory>
#include <algorithm>

Card Deck::DrawFromTop()
{
    Card topCard(cards.front());
    cards.erase(cards.begin());
    return topCard;
}
int myrandom(int i){return std::rand()%i; }

void Deck::Shuffle(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(cards.begin(),cards.end(),gen);
}