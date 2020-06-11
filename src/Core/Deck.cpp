#include "Deck.h"
#include<random>
// #include <memory>
#include <algorithm>

shared_ptr<Card> Deck::DrawFromTop()
{
    size_t frontCardIndex = topCounter++;
    return cards.at(frontCardIndex);
    // clog<<"Deck::DrawFromTop topCounter:"<<topCounter<<'\n';
}
int myrandom(int i){return std::rand()%i; }

void Deck::Shuffle(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(cards.begin(),cards.end(),gen);
}

void Deck::showDeck(){
    cout<<"Current valid Card in Deck:\n";
    for(auto p_card = cards.begin()+topCounter; 
    p_card!=cards.end();
    p_card++){
        
        cout<<p_card->get()->getSuit()
        <<p_card->get()->getValue()<<' ';
    }
    cout<<"\n";
}