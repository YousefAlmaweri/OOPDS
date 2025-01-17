#ifndef SHIP_H
#define SHIP_H

#include <string>
#include <iostream>

class Ship {
protected:
    std::string name;
    char symbol;
    int x, y;
    int lives;
    std::string team;

public:
    Ship(const std::string &name, char symbol, int x, int y, int lives, const std::string &team);
    virtual ~Ship() {}

    virtual void look() = 0;
    virtual void move() = 0;
    virtual void shoot() = 0;

    char getSymbol() const;
    int getX() const;
    int getY() const;
    int getLives() const;
    std::string getTeam() const;

    void takeDamage();
    void setPosition(int newX, int newY);
};

class Battleship : public Ship {
public:
    Battleship(const std::string &name, char symbol, int x, int y, int lives, const std::string &team);
    void look() override;
    void move() override;
    void shoot() override;
};

class Cruiser : public Ship {
public:
    Cruiser(const std::string &name, char symbol, int x, int y, int lives, const std::string &team);
    void look() override;
    void move() override;
    void shoot() override;
};

#endif // SHIP_H
