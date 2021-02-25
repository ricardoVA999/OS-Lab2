#include <stdio.h>
#include <unistd.h>
int main(){
	int a = fork();
	int b = fork();
	int c = fork();
	int d = fork();
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
}
