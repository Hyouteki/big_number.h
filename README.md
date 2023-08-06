# big_number
A C++ library for big_number calculations. Useful in cryptography, big_number methods such as factorial, Fibonacci, etc.<br>
**big_number**: A dynamically allocated object/number that does not have a fixed size keeps getting bigger as the number gets bigger, similar to how it works in Python.

## Deployment
- Copy the header file `big_number.h` to your working directory.
- Use `#include "big_number.h"` to include the file to your code file.

> Look `big_number_test.cpp` for reference.

## Documentation
- Instantiate big_number object
  ``` cpp
  big_number num1(); // by default num1 = 0
  big_number num2(0);
  big_number num3("0");
  big_number num4 = num3;
  ```
- Mathematical operators
  ``` cpp
  num1 += num2;
  num1  = num2 + num3;
  num1 -= num2;
  num1  = num2 - num3;
  num1 *= num2;
  num1  = num2 * num3;
  num1 /= num2;
  num1  = num2 / num3;
  num1 %= num2;
  num1  = num2 % num3;
  ```
- Comparison operators
  ``` cpp
  num1 == num2;
  num1 != num2;
  num1  < num2;
  num1  > num2;
  num1 <= num2;
  num1 >= num2;
  ```
- Increment/decrement operators
  ``` cpp
  ++num1;
  num1++;
  --num1;
  num1--;
  ```
- IO operators
  ``` cpp
  cout << num1;
  cin >> num1;
  ```
- Methods/operators
  ``` cpp
  num1.size() // number of digits in num1
  num1.is_null() // is num1 == 0
  num1[0]; // references the first digit of num1
  num1.last_digit()
  num1.left_shift(n) // equivalent to num1 <<= n;
  num1.right_shift(n) // equivalent to num1 >>= n;
  power(num1, exponent); // num1 is big_number, exponent is int
  sqrt(num1);
  gcd(num1, num2);
  min(num1, num2);
  max(num1, num2);
  multiply_modulus(num1, num2, mod); // equivalent to (num1*num2)%mod;
  power_modulus(num1, exponent, mod); // equivalent to pow(base, exponent)%mod; all are big_numbers
  get_random_prime(bit_size);
  ```
## References
  - https://www.geeksforgeeks.org/bigint-big-integers-in-c-with-example/
