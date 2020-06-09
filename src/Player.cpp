#include "Player.h"

void Player::addMoney(double money){
    this->money += money;
}

double Player::withdrawMoney(){
    double amount = money;
    money = 0;
    return amount;
}

void Player::substractMoney(double amount){
    this->money-=amount;
}

void Player::showHandCards(){
    cout<<this->name<<"'s handCards:\n";
    for(auto& card:handCards)
    {
        cout<<card.getSuit()<<card.getValue()<<' ';
    }

}