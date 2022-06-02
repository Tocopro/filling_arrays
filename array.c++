
#include <iostream>
#include <cctype>
#include <list>
using namespace std;
// A function that check a number if its perfect
int main() {
// initialize the variables

    int number, count = 0, x[10];
    cout << "Enter a Number: " << endl;
    cin >> number;
    // loop through all the numbers from 1 to the number input
    for( int i = 1; i < number; i++)
    {
        if(number % i == 0)
            count += i;
        
    }
    // display the neither outcome
    if(count == number)
        cout << count << " is a perfect number";
    else
        cout << count << " is not a perfect number" << endl;

    return 0;
}
