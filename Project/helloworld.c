#include <stdio.h>
#include <string.h>

void main() {
	char k[40];
	printf("What would you like to say?");
	fgets(k, 20, stdin);
	if (strcmp(k, "Hello World!"))
		printf("Hello User!");

}