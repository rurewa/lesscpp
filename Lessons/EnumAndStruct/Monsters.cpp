// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// 
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

enum class MonsterType {
    ORGE,
    GOBLIN,
    SCELETON,
    ORC,
    TROLL
};

struct Monster {
    MonsterType type;
    string name;
    double health;
};

int main() {
    Monster monster = { MonsterType::GOBLIN, "Bern", 37.7 }; // Относится к структуре
    string monsterName;
    if (monster.type == MonsterType::GOBLIN) { monsterName = "Goblin"; }
    cout << "Monster type: " << monsterName << ", name: " << monster.name << ", health: " << monster.health << endl;
    return 0;
}
// Output
/*
Monster type: Goblin, name: Bern, health: 37.7
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
