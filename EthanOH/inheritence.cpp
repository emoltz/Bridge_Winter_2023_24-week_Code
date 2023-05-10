#include <iostream>
using namespace std;

class Pet{
private:
    int age;
public:
    Pet(){
        age = 0;
    }

    virtual int getAge() {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

};

class Dog: public Pet{
private:
public:
    Dog(int newAge){
        this->setAge(newAge);
    }

    int dogsAge(){
        return this->getAge();
    }

};

class Cat: public Pet{
private:
    int numOfLives;
public:
    Cat(int newAge, int numLives){
        numOfLives = numLives;
        this->setAge(newAge);
    }
    Cat(int numLives){
        numOfLives = numLives;
    }

    int catsAge(){
        return this->getAge();
    }

    int lives(){
        return numOfLives;
    }
};


int main(){
    Dog crunchy(2);
    cout << crunchy.getAge();


    cout << endl;
    Cat cheese(9);
    cout << cheese.lives();
}