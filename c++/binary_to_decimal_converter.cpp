#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
	int num = n;
	int decimal_value = 0;
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		decimal_value = decimal_value + last_digit * base;
		base = base * 2;
	}
	return decimal_value;
}

int main()
{
	int num;
    cin>>num;
	cout << binaryToDecimal(num) << endl;
}
