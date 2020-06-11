//Standard 52-card deck
#ifndef CARD_H
#define CARD_H
#include<string>
#include <iostream>
#include "UnCopyable.h"
using namespace std;

class Card{
    enum class Suit{
        Heart,
        Diamond,
        Spade,
        Club
    };
    const string Values[14]={"1","2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    string getRawValue(Suit s){
        switch(s){
            case Suit::Heart: return "♥";//Heart
            case Suit::Diamond: return "◆";//Diamond";
            case Suit::Spade: return "♠";//"Spade";
            case Suit::Club: return "♣";//"Club";
        }
    }
    Suit card_suit;
    string card_value;

    public:
    // Card& operator=(const Card& card){
    //     this->card_suit = card.card_suit;
    //     this->card_value = card.card_value;
    //     return *this;
    // }
    Card(int suit, int val){
        card_suit = Suit(suit);
        card_value = Values[val];
    }

    void printCard(){
        std::cout<<getRawValue(card_suit);
        std::cout<<card_value<<' ';
    }

    inline string getValue(){ return card_value;}
    inline string getSuit(){ return getRawValue(card_suit);}
    
};
#endif 