// #ifndef PLAYER
// #define PLAYER
#pragma once
#include<vector>
#include<iostream>
#include "Person.h"
#include "Deck.h"

using namespace std;
class Player: public Person{
    double money_;
    int score_;
    Deck* deck_{nullptr};
    vector<Card>* handCards_{nullptr};

    void withdrawMoney();
    void drawMoney(double amount);


    public:
    friend class Dealer;
    Player();
    ~Player();
    Player(const string name, double money);
    Player& operator= (const Player&);

    void addMoney(double amount);

    int getScore();
    string getName();
    void addCard(const Card& card);
    void showHandCards();
};

// #endif