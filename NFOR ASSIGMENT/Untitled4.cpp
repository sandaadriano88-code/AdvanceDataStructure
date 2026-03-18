#include <iostream>
using namespace std;

// Recursive function
int sum(int n)
{
    if(n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers is: " << sum(n);

    return 0;
}
