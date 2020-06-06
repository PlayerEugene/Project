#include <stdio.h>
#include <string.h>

void main() {
	char k[40];
	while (strcmp(k, "exit\n")) {
		printf("What would you like to say? ");
		fgets(k, 20, stdin);
		if (!strcmp(k, "Hello World!\n"))
			printf("Hello User!\n");
		else if (!strcmp(k, "Hello Me!\n"))
			printf("Hello You!\n");
		else if (!strcmp(k, "exit\n")) {

		}
		else
			printf("Try another phrase!");
}
}