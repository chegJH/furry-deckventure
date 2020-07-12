//Standard 52-card deck
// #ifndef CARD_H
// #define CARD_H
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Card
{
    enum class Suit
    {
        Heart,
        Diamond,
        Spade,
        Club
    };
    static const string Values[14];// = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

protected:
    Suit cardSuit_;
    string cardValue_;

public:
    Card(const Card &card);
    Card& operator=(const Card &);
    ~Card();
    explicit Card(int suit, int val);

    friend ostream &operator<<(ostream &, const Card &);
    string getValue() const;
    string getSuit() const;
};
// #endif