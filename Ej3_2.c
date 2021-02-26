#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	clock_t a, b;
	pid_t c, d, e;

	a = clock();
	c = fork();
	if (c == 0){
		d = fork();
		if (d == 0){
			e = fork();
			if (e == 0){
				for (int i = 0; i < 1000000; i++) { printf("%d\n", i); };
			}
			else{
				for (int i = 0; i < 1000000; i++) { printf("%d\n", i); };
				wait(NULL);
			}
		}
		else{
			for (int i = 0; i < 1000000; i++) { printf("%d\n", i); };
			wait(NULL);
		}
	}
	else{
		wait(NULL);
		b = clock();
		double res = (double)(b - a) / CLOCKS_PER_SEC;
		printf("%f\n", res);
	}
	return 0;
}