#include "Dealer.h"


void Dealer::dealCardTo(Player &player)
{
    Card card = deck_.DrawFromTop();
    cout<<"Give card:"<<card<<"to "<<player.getName()<<' ';
    player.addCard(deck_.DrawFromTop());
}
void Dealer::takeMoneyFrom(Player& player,unsigned int value)
{
    player.drawMoney(value);
    houseMoney_ += value;
}
void Dealer::giveMOneyTo(Player &player, unsigned int value)
{
    houseMoney_ -= value;
    player.addMoney(value);
}