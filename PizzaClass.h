#ifndef PIZZACLASS_H
#define PIZZACLASS_H
#include <iostream>
# include<vector>
#include<string>

using namespace std;




class PizzaClass
{
public:
    PizzaClass(string Name, int diameter, int cost);
    string getName() const;
    int getCost() const;
    int getDiameter() const;
    void printToppings();
    void addToppings(string topping)

private:
    string name;
    int diameter;
    int cost;
    vector <string> toppings;
};

#endif