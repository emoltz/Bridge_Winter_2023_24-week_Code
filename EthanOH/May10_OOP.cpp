#include <iostream>
using namespace std;

class Person{
public:
    double height;
    double age;
    double weight;

    Person(double newAge, double newWeight, double newHeight): age(newAge), weight(newWeight), height(newHeight){};
    //overload the + function

    Person operator+(Person& otherPerson){
        double newAge = this->age + otherPerson.age;
        double newHeight = this->height + otherPerson.height;
        double newWeight = this->weight + otherPerson.height;

        //create a new person
        Person temp(newAge, newWeight, newHeight);
        return temp;
    }

    virtual int powerLevel(){
        //stuff
    }


};

class Saiyan: Person{
public:
    Saiyan(double newAge, double newWeight, double newHeight, int x) : Person(newAge, newWeight, newHeight) {

    }

    Saiyan operator+(Saiyan &other){

    }

    int powerLevel(){

    }

};


int main(){
    Person Goku(500, 1000, 5);
    Person Vegeta(1000, 30, 10);

    Person Gogeta = Goku + Vegeta;
    cout << Gogeta.age;

    Saiyan s;
    Saiyan s2;

    s.powerLevel();
    Goku.powerLevel();

    return 0;
}