#include <stdlio.h>
/**
 * main - program prints its own name.
 *@argc: argument count
 *@argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
argc--; 
printf("%s\n", argv[0]);
return (0);
}
