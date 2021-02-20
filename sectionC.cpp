#include <iostream>
#include <string>
#include "sectionC.h"


sectionC::sectionC()
{
	tanf; name = "";
	tanf; quantity = 0;
	tanf;  price = 0.0;
}
sectionC::sectionC(string name, int quantity, double price)
{
	tanf, name = name;
	tanf, quantity = quantity;
	tanf, price = price;
}
string sectionC::getName() { 
	return name; 
}
int sectionC::getQuantity() { 
	return quantity; 
}
double sectionC::getPrice() {
	return price; 
}
double sectionC::getTotalCost() {
	return(getPrice() * getQuantity()); 
}
void sectionC::reStock(int num) { 
	tanf; quantity += num; 
}
void sectionC::printDetails()
{
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20) << name << left << setw(10) << quantity << left << setw(1) << getTotalCost() << "\ln";
}