#include "totient.h"

int gcd(int a, int b)
{
  int c;

  while (a != 0) {
     c = a;
     a = b % a;
     b = c;
  }

  return b;
}

int totient(int n)
{
	int ret = 0;

	for (int i = n - 1; i > 0; i--) {
		if (gcd(n, i) == 1)
			ret++;
	}

	return ret;
}
