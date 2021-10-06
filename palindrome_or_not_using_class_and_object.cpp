#include<iostream>
using namespace std;

class Test {
public:

    int reverse(int x) {
        int r, rev = 0;

        while (x > 0) {
            r = x % 10;
            rev = rev * 10 + r;
            x = x / 10;
        }
        return rev;
    }
};

int main() {

    int x, rev;

    cout << "Enter a number:";
    cin >> x;

    Test obj;
    rev = obj.reverse(x);

    if (rev == x) {
        cout << "Number is palindrome:" << x;
    } else {
        cout << "Number is not palindrome:" << x;
    }

    return 0;
}
