#include "PizzaClass.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;

PizzaClass::PizzaClass(string name, int diameter,int cost)
{
    this->name = name;
    this->diameter = diameter;
    this->cost = cost;
    toppings.push_back("cheese");
}
 string PizzaClass::getName ()const
{
    return name;
}
int PizzaClass:: getCost() const
{
    return cost;
}
int PizzaClass:: getDiameter() const
{
    return diameter;
}
void PizzaClass::printToppings()
{
    for(string topping:toppings)
    {
        cout << "\t" << topping << endl;
    }
}
void PizzaClass:: addToppings(string topping)
{
    toppings.push_back(topping);
}