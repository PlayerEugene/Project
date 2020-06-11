#ifndef __PARSER_H__
#define __PARSER_H__

typedef enum outputs
{
	HELLO_USER,
	HELLO_YOU,
	ERROR,
	EXIT,
} outputs_e;

outputs_e parserInput(const char* input);

#endif
