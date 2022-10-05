#include "monty.h"

char **op_toks = NULL;

/**
 * main - launches the monty bytecodes interpreter program.
 * @argc: the number of arguments supplied to the command line.
 * @argv: an array containing the user-supplied arguments.
 * Return: EXIT_SUCCESS on Success, EXIT_FAILURE on Error.
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	int ret = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());

	fp = fopen(argv[1], "r");
	if (!fp)
		return (f_open_error(argv[1]));

	ret = run_monty(fp);

	fclose(fp);
	return (ret);
}
