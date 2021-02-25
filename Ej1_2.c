#include <stdio.h>
#include <unistd.h>

int main(){
	int i;
	for (i=0; i<4; i++){
		int j = fork();
		printf("%d\n",j);
	}
}
