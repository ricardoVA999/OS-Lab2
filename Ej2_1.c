#include <stdio.h>
#include <time.h>

int main()
{
	clock_t a;
	clock_t b;
	a = clock();
	for (int i = 0; i < 1000000; i++) {};
	for (int i = 0; i < 1000000; i++) {};
	for (int i = 0; i < 1000000; i++) {};
	b = clock();
	double res = (double)b - a;
	printf("%f\n", res);
	return 0;
}