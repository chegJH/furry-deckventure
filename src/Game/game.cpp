#include <iostream>
#include "Table.h"
#include <vector>
using namespace std;

int main()
{

    // vector<Table> openTables = {Table()};
    // Table& table = openTables.front();
    Table table = Table();
    Player p1 = Player("Jay",500);
    Player p2 = Player("Tina",500);
    Player p3 = Player("Noah",500);
    table.join(p1);
    table.join(p2);
    table.join(p3);

    table.start();
    
    return 0;
}