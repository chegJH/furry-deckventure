#ifndef PLAYER
#define PLAYER
#include<vector>
#include<iostream>
#include "Person.h"
#include "Card.h"

using namespace std;
class Player: public Person{
    double money;
    // vector<Card> handCards;
    vector<shared_ptr<Card>> handCards;

    double withdrawMoney();
    void substractMoney(double amount);


    public:
    // Player& operator&= (const Player& p){
    //     this->money = p.money;
    //     this->handCards = move(p.handCards);
    //     this->name = p.name;
    // }
    Player(const string& name, double money):Person(name),money(money){
        cout<<"\nWelcome to the game "<<name<<'\n';
    }

    void addMoney(double amount);

    const inline string getPlayerName() {return name;}
    const inline double getPlayerScore() {return this->money;}
    // vector<Card>& getPlayerHands() {return handCards;}
    // void AddHandCard(Card& card){handCards.push_back(Card(card));}
    void AddHandCard(shared_ptr<Card> card);
    void showHandCards();
};

#endif