#inlude "main.h"
#include <stdio.h>
/**
*
*
*
*
*/
int main(int argc, char *argv[])
{
while (*argv)
{
(void) argc;
printf("%s\n", *argv);
argv++;
}
return (0);
}
