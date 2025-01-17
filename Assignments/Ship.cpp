#include "Ship.h"

Ship::Ship(const std::string &name, char symbol, int x, int y, int lives, const std::string &team)
    : name(name), symbol(symbol), x(x), y(y), lives(lives), team(team) {}

char Ship::getSymbol() const { return symbol; }
int Ship::getX() const { return x; }
int Ship::getY() const { return y; }
int Ship::getLives() const { return lives; }
std::string Ship::getTeam() const { return team; }

void Ship::takeDamage() {
    lives--;
    if (lives <= 0) {
        std::cout << name << " has been destroyed!\n";
    }
}

void Ship::setPosition(int newX, int newY) {
    x = newX;
    y = newY;
}

Battleship::Battleship(const std::string &name, char symbol, int x, int y, int lives, const std::string &team)
    : Ship(name, symbol, x, y, lives, team) {}

void Battleship::look() {
    std::cout << "Battleship " << name << " is looking around.\n";
}

void Battleship::move() {
    int direction = rand() % 4;
    switch (direction) {
    case 0: x++; break; // Move right
    case 1: x--; break; // Move left
    case 2: y++; break; // Move down
    case 3: y--; break; // Move up
    }
    std::cout << "Battleship " << name << " moved to (" << x << ", " << y << ").\n";
}

void Battleship::shoot() {
    std::cout << "Battleship " << name << " fires at enemy positions!\n";
}

Cruiser::Cruiser(const std::string &name, char symbol, int x, int y, int lives, const std::string &team)
    : Ship(name, symbol, x, y, lives, team) {}

void Cruiser::look() {
    std::cout << "Cruiser " << name << " scans the nearby area.\n";
}

void Cruiser::move() {
    std::cout << "Cruiser " << name << " moves cautiously.\n";
}

void Cruiser::shoot() {
    std::cout << "Cruiser " << name << " does not have shooting capabilities.\n";
}
