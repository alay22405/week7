#include "store.h"

int store::indexOf(string name)
{
    int index = -1;
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].getName().compare(name) == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}
void store::addItem()
{
    string item;
    int quantity;
    double price;
    int onHand;
    cin.ignore();
    cout << "Enter the item name: ";
    getline(cin, item, '\n');
    int index = indexOf(item);
    if (index == -1)
    {
        
        cout << "Enter the quantity of the article: ";
        cin >> quantity;
        cout << "Enter what is the price: ";
        cin >> price;
        items.push_back(sectionC(item, quantity, price));
        cout << item << " successfully added to the list.\n";
    }
    
}
void store::checkOut()
{
    cout << "Enter what do you have:\n";
    for (sectionC item : items)
        item.printDetails();
    double subTotal = 0.0;
    for (sectionC item : items)
        subTotal += item.getTotalCost();
    double salesTax = (0.5 * subTotal);
    double total = (subTotal + salesTax);
    cout << "\nPurchase sub total: $" << subTotal << "\n";
    cout << "Tax: " << salesTax << endl;
    cout << "Purchase total: $" << total << "\n";
}
