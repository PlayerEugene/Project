#include <stdio.h>
#include <string.h>
#include "parser.h"
#define LENGTH 40

/*basic Hello World C file*/

void main() {
	char string[LENGTH];

	while (strcmp(string, "exit\n"))
	{
		printf("What would you like to say? ");
		fgets(string, LENGTH, stdin);
		switch (parserInput(string))
		{
			case HELLO_USER:
				printf("Hello User!\n");
				break;

			case HELLO_YOU:
				printf("Hello You!\n");
				break;

			case ERROR:
				printf("Try another phrase!\n");
				break;

			case EXIT:
				break;

			default:
				printf("Try another phrase!\n");
				break;
		}
	}
}