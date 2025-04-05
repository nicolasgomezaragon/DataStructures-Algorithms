#include<iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Type a n number to get the sum of all the numbers smaller than it: ";
    cin >> n;

    for(i = n-1; i = 0; i--)
        sum += i;

    cout << "Result: " << sum << endl;
    
    return 0;
}