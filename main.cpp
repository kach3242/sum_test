#include <stdio.h>
#include "sum.h"

int main() {
	int a, b, n;
	printf("input 'a' : ");
	scanf("%d", &a);
	printf("input 'b' : ");
	scanf("%d", &b);
	n = sum(a,b);
	printf("from %d to %d : %d\n", a, b, n);
	return 0;
}
