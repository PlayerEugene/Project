#include <string.h>
#include "parser.h"

/*int flag = 0;*/
/*extern*/

outputs_e parserInput(const char* input)
{
	static int flag = 0;
	if (!strcmp(input, "Hello World!\n"))
	{
		if (flag == 0)
		{
			return HELLO_USER;
		}
		else
		{
			return HELLO_YOU;
		}
	}
	else if (!strcmp(input, "Hello Me!\n"))
	{
		flag = 1;
		return HELLO_YOU;
	}
	else if (!strcmp(input, "exit\n"))
	{
		return EXIT;
	}
	return ERROR;
}