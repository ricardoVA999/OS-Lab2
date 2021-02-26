#include <stdio.h>
#include <time.h>

int main()
{
	clock_t a;
	clock_t b;
	a = clock();
	for (int i = 0; i < 1000000; i++) { printf("%d\n", i); };
	for (int i = 0; i < 1000000; i++) { printf("%d\n", i); };
	for (int i = 0; i < 1000000; i++) { printf("%d\n", i); };
	b = clock();
	double res = (double)(b - a)/CLOCKS_PER_SEC;
	printf("%f\n", res);
	return 0;
}