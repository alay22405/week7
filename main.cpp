#include "store.h"

int main()
{
    store s;
    int n;
    std::cout << "Enter the total number of stuff in the store : ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        s.addItem();
        std::cout << "\n";
    }

    std::cout << "\nChecking out\n";
    s.checkOut();
    return 0;
}