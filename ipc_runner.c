#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int ipc_runner (){
	int a = fork();
	if (a==0) {
		execl("ipc", "ipc", "157", "a", (char*)NULL);
	} else {
		usleep(2000);
		execl("ipc", "ipc", "157", "b", (char*)NULL);
	}
}
