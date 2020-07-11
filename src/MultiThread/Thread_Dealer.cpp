#include <thread>
#include "Core/Dealer.h"
#include "Core/Player.h"

void thread_game(const string& name)
{

}


int main(int argc, char* argv[])
{
    // pthread_t m_dealer;
    //create two thread dealer and player
    //dealer pass card to player
    string gameName{"Deck Game"};
    std::thread game(&thread_game,std::move(gameName) ); 

    if (game.joinable())
        game.join();

    return 0;



}