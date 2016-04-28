#include "head.h"

int inverse(int a, int b) {
	if (b == 1) {
		return 1;
	};

	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	};
	if (x1 < 0) {
		x1 += b0;
	};
	return x1;
}