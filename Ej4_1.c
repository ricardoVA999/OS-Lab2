#include <stdio.h>
#include <unistd.h>
int main() {
	int a = fork();
	if (a == 0) {
		printf("Hola soy el hijo\n");
	}
	else
	{
		while (1);
	}
}