#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*
*
*
*
*/
int main(int argc, char *argv[])
{
int m = 0;
if (argc == 3)
{
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
else
{
printf("Error\n");
}
return (1);
}
