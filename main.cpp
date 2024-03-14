#include <iostream>///Por que dice que no se usa?//
#include "Enemy/Enemy.h"
#include "Player/Player.h"
#include "Combat/Combat.h"
#include <queue>
using namespace std;

int main() {

    Player *player = new Player("Samantha", 100, 5, 3, 5);
    Enemy *enemy = new Enemy("Algebra", 100, 5, 3, 5);
    Enemy *enemy2 = new Enemy("Programacion", 30, 4, 2, 2);


    vector<Character *> participants;
    participants.push_back(player);
    participants.push_back(enemy);
    participants.push_back(enemy2);


    Combat *combat = new Combat(participants);
    combat->doCombat();

    delete player;
    delete enemy;
    delete combat;
    return 0;
}