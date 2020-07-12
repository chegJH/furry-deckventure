#include "Card.h"

const string Card::Values[]= {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

Card& Card::operator=(const Card& other)
{
    cardSuit_ = other.cardSuit_;
    cardValue_ = other.cardValue_;
    return *this;
}

Card::~Card()
{
    cout<<"\n~ card"<<getSuit()<<getValue()<<'\n';
}
Card::Card(int suit, int val)
{
    cardSuit_ = Suit(suit);
    cardValue_ = Values[val];
}

Card::Card(const Card &other)
{
    cardSuit_ = other.cardSuit_;
    cardValue_ = other.cardValue_;
}

string Card::getSuit() const
{
    switch (cardSuit_)
    {
    case Suit::Heart:
        return "♥"; //Heart
    case Suit::Diamond:
        return "◆"; //Diamond";
    case Suit::Spade:
        return "♠"; //"Spade";
    case Suit::Club:
        return "♣"; //"Club";
    }
}

string Card::getValue() const
{
    return cardValue_;
}
std::ostream& operator << (std::ostream& os,const Card& card)
{
    os<<card.getSuit()<<card.getValue()<<',';
    return os;
}
