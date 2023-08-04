#include "big_number.h"
using namespace std;

int main()
{
	// big_number num1("99");
	// big_number num2("200");
	// big_number num3("300");
	// big_number num4("0");
	// num2 = num2 - num1;
	// ++num1;
	// num1++;
	// --num1;
	// num1--;
	// cout << "num1[0] :: " << num1[0]-'0' << endl;
	// cout << "num1 is null :: " << num1.is_null() << endl;
	// cout << "num4 is null :: " << num4.is_null() << endl;
	// cout << "num1 :: " << num1 << endl;
	// cout << "num3 :: " << num3 << endl;
	// num3 *= num1;
	// cout << "num3 :: " << num3 << endl;
	// num3 *= num4;
	// cout << num1 << endl;
	// cout << num2 << endl;
	// cout << num3 << endl;
	// num1 -= num3;
	// cout << num1 << endl;
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	big_number num1(n1), num2(n2), num3(n3);
	cout << "num1 :: " << num1 << endl;
	cout << "num2 :: " << num2 << endl;
	cout << "num3 :: " << num3 << endl;
	cout << "pow :: " << power(num1, n2) << endl;
	cout << "num1 :: " << num1 << endl;
	cout << "num2 :: " << num2 << endl;
	cout << "num3 :: " << num3 << endl;
	cout << "sqrt num1 :: " << sqrt(num1) << endl;
	cout << "num1 :: " << num1 << endl;
	cout << "num2 :: " << num2 << endl;
	cout << "num3 :: " << num3 << endl;
	cout << "mulmod :: " << multiply_modulus(num1, num2, num3) << endl;
	cout << "num1 :: " << num1 << endl;
	cout << "num2 :: " << num2 << endl;
	cout << "num3 :: " << num3 << endl;
	cout << "powmod :: " << power_modulus(num1, n2, num3) << endl;
	cout << "num1 :: " << num1 << endl;
	cout << "num2 :: " << num2 << endl;
	cout << "num3 :: " << num3 << endl;
	return 0;
}