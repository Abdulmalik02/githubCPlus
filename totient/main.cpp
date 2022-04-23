/*
 * Euler's totient function:
 * phi(n) = number of positive integers less than n and relatively prime to n
 * phi(1) = 1
 */

#include <iostream>
#include "totient.h"

using namespace std;

int main()
{
	int n;

	cout << "Input number: " << endl;
	cin >> n;

	cout << "phi(n) = " << totient(n) << endl;

	return 0;
}
