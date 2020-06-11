#include <stdio.h>
#include <string.h>
#define LENGTH 40

/*basic Hello World C file*/

typedef enum
{
	HELLO_USER,
	HELLO_YOU,
	ERROR,
	EXIT,
} output_e;

void main() {
	char input[LENGTH];
	int flag = 0;
	int state = 0;
	output_e output;

	while (!state) {
		output = ERROR;
		printf("What would you like to say? ");
		fgets(input, LENGTH, stdin);
		if (!strcmp(input, "Hello World!\n"))
		{
			if (flag == 0)
			{
				output = HELLO_USER;
			}
			else
			{
				output = HELLO_YOU;
			}
		}
		else if (!strcmp(input, "Hello Me!\n"))
		{
			output = HELLO_YOU;
			flag = 1;
		}
		else if (!strcmp(input, "exit\n")) {
			output = EXIT;
			state = 1;
		}
		
		switch (output)
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