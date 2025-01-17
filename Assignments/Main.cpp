#include "Simulation.h"

int main() {
    Simulation sim(10, 10, 100);
    sim.loadFromFile("game.txt");
    sim.run(10);cl
    return 0;
}
