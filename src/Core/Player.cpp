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

void Player::AddHandCard(shared_ptr<Card> card)
{
    shared_ptr<Card> newHandCard = card;
    cout<<"New Card for Player "<<name<<'\n'
    <<"\tcard :"<<newHandCard->getSuit()<<newHandCard->getValue()<<'\n'
    <<"\tcard count:"<<newHandCard.use_count()<<'\n';
    handCards.push_back(newHandCard);
}
void Player::showHandCards(){
    cout<<this->name<<"'s handCards:\n";
    for(auto card:handCards)
    {
        cout<<card->getSuit()<<card->getValue()<<' ';
    }
    cout<<'\n';

}