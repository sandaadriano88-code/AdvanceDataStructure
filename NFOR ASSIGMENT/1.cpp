#include <iostream>
using namespace std;

int main()
{
    float totalPrice, discount, finalAmount;

    cout << "Enter total price of items: ";
    cin >> totalPrice;

    if (totalPrice > 10000)
    {
        discount = totalPrice * 0.10;
        finalAmount = totalPrice - discount;
    }
    else
    {
        discount = 0;
        finalAmount = totalPrice;
    }

    cout << "Discount: " << discount << endl;
    cout << "Final amount after discount: " << finalAmount << endl;

    return 0;
}
