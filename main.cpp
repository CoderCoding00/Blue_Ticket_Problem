// BLUE TICKET
// You have a blue lottery ticket, with ints a, b, and c on it.
// This makes three pairs, which we'll call
// ab, bc, and ac.
// Consider the sum of the numbers in each pair.

// If any pair sums to exactly 10, the result is 10.
// Otherwise if the ab sum is exactly 10 more than either bc or ac sums, the result is 5.
// Otherwise the result is 0. You will print the result. Here are some samples.

// • inputof (9,1,0) -> 10
// • inputof (9,2,0) -> 0
// • inputof (6,1,4) -> 10

#include <iostream>
using namespace std;

int blueTicket(int a, int b, int c)
{
    int result;
    int ab = a + b;
    int bc = b + c;
    int ac = a + c;
    if (ab == 10 || bc == 10 || ac == 10)
    {
        result = 10;
    }
    else if (ab == bc + 10 || ab == ac + 10)
        result = 5;
    else
        result = 0;
    return result;
}

// main() to test the blueTicket() function
int main()
{

    cout << "Testing blueTicket(9, 1 , 0): " << blueTicket(9, 1, 0) << endl;
    cout << "Testing blueTicket(9, 2, 0): " << blueTicket(9, 2, 0) << endl;
    cout << "Testing blueTicket(6, 1, 4): " << blueTicket(6, 1, 4) << endl;
    return 0;
}