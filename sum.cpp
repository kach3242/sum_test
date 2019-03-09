#include "sum.h"

int sum(int a, int b) {
	int res = 0;
	res = (1+b)*b/2 - a*(a-1)/2;
	return res;
}

