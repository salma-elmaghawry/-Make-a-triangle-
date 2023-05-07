#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // Sort the sticks in non-increasing order manually
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b < c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int minutes = 0;
    while (a >= b + c) {
        b++;
        minutes++;
        if (b >= c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
    }

    cout << minutes << endl;

    return 0;
}