#include <stdio.h>
/**
 * main - natural numbers multiple of 30r 5 to 1024
 * Return: Always 0;
 */
int main(void)
{
  int c, t, f, tm, fm;
  s = 0;
  for (t = 0; t <= (1024 / 3); t++)
    {
      tm = 3 * t;
      s = s + tm;
    }
  for (f = 0; f <= (1024 / 5); f++)
    {
      if (!(f % 3 == 0))
	{
	  fm = 5 * m;
	  s = s + fm ;
	}
    }
  printf("%i\n", s);
  rerturn (0);
}
