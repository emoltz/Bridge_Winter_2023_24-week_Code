#include <iostream>

using namespace std;

// Object-Oriented Programming OOP
class Car {
private:
    double _weight;
    double _height;
    string _color;
    int _numOfWheels;
    int _year;
    string _name;
public:

    Car() {
        _weight = 0;
    }

    Car(double weight) {
        _weight = weight;
    }

    Car(double weight, string name) {
        _weight = weight;
        _name = name;
    }

    // getters and setters
    double getWeight() {
        return _weight;
    }

    void displayWeight() {
        cout << "This car, which is a " << _name << " has a weight of " << _weight << " tons" << endl;
    }

};

void cars() {
    Car chevy(15, "Chevy");
    Car tesla(10, "Tesla");

    chevy.displayWeight();
    tesla.displayWeight();
}


class Pet {
private:
    int _age = 0;
    string _name;
    double _weight;
protected:
    int protectedThing;
public:
    Pet() {
        _age = 0;
    }

    void incrementAge() {
        _age++;

    }

    void setAge(int newAge) {
        _age = newAge;
    }

    void setName(string newName) {
        _name = newName;
    }

    string getName() {
        return _name;
    }

    virtual void speak() = 0;
};

class Dog : public Pet {
private:
    int _barkLoudness;
    int _cuteness;

public:
    Dog() {
        this->setAge(0);
        this->protectedThing = 0;
    }

    Dog(string newName, int cuteness) {
        this->setName(newName);
        setCuteness(cuteness);
    }

    void setCuteness(int newCuteness) {
        if (newCuteness > 10) {
            cout << "Too cute! Setting to highest value of 10";
            _cuteness = 10;
        } else {
            _cuteness = newCuteness;
        }
    }

    int getCuteness() {
        return _cuteness;
    }

    virtual void speak() {
        cout << "Woof!";
    }

    friend ostream &operator<<(ostream &os, Dog &pet);

    Dog operator++() {
        this->incrementAge();
        return *this;
    }
};

ostream &operator<<(ostream &os, Dog &pet) {
    string name = pet.getName();
    os << name;
    return os;

}

class Cat : public Pet {
private:
    int scariness;
    int clawSize;
    bool stealthMode;
public:
    Cat(const string& newName) {
        this->setName(newName);
    }

    void speakName(){
        cout << this->getName();
    }

    virtual void speak() {
        cout << "Meow!";
    }
};

void dogs() {
    Dog crunchy("Crunchy", 11);
    cout << endl;
    cout << crunchy.getCuteness();
}

class Bird : public Pet {
private:
public:
    virtual void speak() {
        cout << "Chirp!";
    }
};

void main2(){
    Dog crunchy("Crunchy", 10);
    Cat cheese("Cheese");
    cout << crunchy;
    ++crunchy;
}

int main() {
    Cat cheese("Cheese");
    Cat roger("Roger");
    cheese.speak();
    roger.speak();


    return 0;
}