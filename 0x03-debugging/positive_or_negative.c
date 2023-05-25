/**
 *positive_or_negative - prints positive if i is greater than 0
 *i - 0
 */
#include "main.h"
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
