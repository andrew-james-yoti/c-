#include <iostream>
#include <string>
#include "Date/Date.h"
// #include "Date/Date.cpp"

using namespace std;

// Function declaration
void pointer();
void ageOutput(int age);
int mySum(int x);
void numSwap();
// Function declaration with default arg
void myFunction(string country = "Norway");

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
    string myString;
  private:   // Private access specifier
    int y;   // Private attribute
};

class Car {
    private:
        string brand;   
        string model;
        int year;
        int speed;
    public:
        void myCar(); // Method/function declaration
        void setSpeed(int s);
        Car(string b, string m, int y); // Constructor declaration
        string getBrand();
        string getModel();
        int getYear();
        int getSpeed();
        /*
        Car(string b, string m, int y) {
            brand = b;
            model = m;
            year = y;
        }
        */
};

class Mustang: public Car {
    public:
        Mustang();
};

// Constructor definition outside the class
Car::Car(string b, string m, int y) {
    brand = b;
    model = m;
    year = y;
}

Mustang::Mustang() : Car("Ford", "Mustang", 1969) { }

// Method/function definition outside the class
void Car::myCar() {
    // cout << this.brand << " " << this.model << " " << this.year << endl;
}

void Car::setSpeed(int s) {
    speed = s;
}

string Car::getBrand() {
    return brand;
};

string Car::getModel() {
    return model;
};

int Car::getYear() {
    return year;
};

int Car::getSpeed() {
    return speed;
};

int main()
{
    int myNum = 15;
    int myAge;
    MyClass myObj;
    Date date(2021, 1, 30);
    myObj.x = 25;
    // date::setDate(2021, 1, 30);
    // Create an object of Car
    Car carObj1("BMW", "X5", 1999);
    /*
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;
    */

    // Create another object of Car
    // Mustang mustang(); // warning: empty parentheses interpreted as a function declaration
    Mustang mustang;
    // Car carObj2("Ford", "Mustang", 1969);
    /*
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;
    */

    string hello = "Hello";
    string* greeting = &hello;
    cout << *greeting << " World" << endl;
    cout << "I'm learning c++" << endl;
    cout << myNum << endl;
    cout << "How old are you?" << endl;
    cin >> myAge;
    ageOutput(myAge);

    pointer();

    myFunction();

    cout << "My Sum is " << mySum(12) << endl;

    numSwap();

    cout << "myObj.x " << myObj.x << endl;

    // Print attribute values
    cout << carObj1.getBrand() << " " << carObj1.getModel() << " " << carObj1.getYear() << "\n";
    cout << mustang.getBrand() << " " << mustang.getModel() << " " << mustang.getYear() << "\n";
    cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;

    return 0;
}

// Function definition
void pointer() {
    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food (0x6dfed4)
    cout << &food << endl;

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << endl;

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << endl;

    // Output the new value of the food variable (Hamburger)
    cout << food << endl;
}


void ageOutput(int age) {
    cout << "My age is " << age << " years old." << endl;
}

// Do not declare default value in function definition
void myFunction(string country) {
  cout << country << "\n";
}

int mySum(int x) {
  return 5 + x;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void numSwap() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";
}
