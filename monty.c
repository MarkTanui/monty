#include "monty.h"
#define TOKEN_DELIM " \t\n"
var_1 vari;

/**
 * main - runs monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: return -1 if failed, else 1
 */
int main(int argc, char **argv)
{
	char line[800];
	char *token;
	char refer[2][80];
	int i = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	vari.fil = fopen(argv[1], "r");
	if (vari.fil == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	vari.line_number = 1;
	vari.mystack = NULL;
	vari.queue_ask = 0;
	while (fgets(line, sizeof(line), vari.fil))
	{
		i = 0;
		memset(refer[0], 0, 80);
		memset(refer[1], 0, 80);
		token = strtok(line, " \n\t\r");
		if (token)
		{
			while (token != NULL)
			{
				strcpy(refer[i], token);
				token = strtok(NULL, " \n\t\r");
				i++;
			}
			run(refer);
		}
		vari.line_number++;
	}
	fclose(vari.fil);
	f_list(vari.mystack);
	return (0);
}
