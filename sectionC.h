#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class sectionC
{
private:
	string name;
	int quantity;
	double price;
public:
	sectionC();
	sectionC(string, int, double);
	string getName();
	int getQuantity();
	double getPrice();
	double getTotalCost();
	void reStock(int);
	void printDetails();
};
