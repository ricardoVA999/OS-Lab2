#include <stdio.h>
#include <unistd.h>
int main() {
	int i;
	int a = fork();
	if (a == 0) {
		for (i = 0; i < 1000000; ++i) {
			printf("%d\n", i);
		}
	}
	else
	{
		while (1);
	}
}