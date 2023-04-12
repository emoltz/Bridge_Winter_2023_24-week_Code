#include <iostream>
#include <vector>
using namespace std;
// Gameboard "garden"

const int LIMITS = 20;
const int NUM_DOODLEBUGS = 5;
const int NUM_ANTS = 100;

class Position; //optional
class Stats;
class Organism{

};
class Ant : public Organism{

}; //inherits from Org
class Doodlebug: public Organism{
private:
    bool alive = true;
public:
    void kill(){
        this->alive = false;
    }

};
class Area{
private:
    int x;
    int y;
public:
    Organism* garden[LIMITS][LIMITS];

    void populate(){
        for (int i = 0; i < LIMITS; i++) {
            for (int j = 0; j < LIMITS; j++) {
                garden[x][y] = nullptr;

            }
        }
    }
    ~Area(){
        for (int i = 0; i < LIMITS; i++) {
            for (int j = 0; j < LIMITS; j++) {
                delete garden[x][y];
            }
        }
    }


};

int main(){
    srand(time(0));
    Organism* bug1 = new Ant();
    char enterKey;
    if (enterKey == '\n'){
        //do stuff
    }


    Organism* bug2 = new Doodlebug();
    bug1 = bug2;






    return 0;
}