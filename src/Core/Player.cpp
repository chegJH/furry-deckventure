#include "Player.h"

Player::Player() : Player(string("Player_Name_default"), 0)
{
}
Player::Player(const string name, double money) : Person(name), money_(money)
{
    cout << "\nWelcome to the game " << getName() << '\n';
}
void Player::addMoney(double money)
{
    this->money_ += money_;
}

void Player::withdrawMoney()
{
    money_ = 0;
}

void Player::drawMoney(double amount)
{
    money_ -= amount;
}

//move given card to player hands
void Player::addCard(const Card &card)
{
    if (deck_ == nullptr)
    {
        deck_ = new Deck();
        handCards_ = &deck_->deck;
        handCards_->push_back(std::move(card));
    }
    else
    {
        handCards_->push_back(std::move(card));

    }
    cout << getName() << " got card:"
         << card << '\n';
}
void Player::showHandCards()
{
    cout << getName() << " handCards:\n"
         << deck_;
}

string Player::getName()
{
    return Person::getName();
}

Player::~Player()
{
    delete deck_;
    cout << "Remove property for " << getName();
}