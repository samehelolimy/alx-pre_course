#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* main - our code starting here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("The number is positive\n");
	else if (n < 0)
		printf("The number is negative\n");
	else
	printf("The number is zero\n");
	return (0);
}
