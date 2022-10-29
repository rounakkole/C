#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i = 0;
  int rn;
  double regex;
	double time_taken;
	clock_t t1, t2;

	t1 = clock();
	for (i; i < 100; i++)
	{
		system("clear");
		printf("Time taking to execute  %d\n", i);
	}

	t1 = clock() - t1;

	i = 0;

	t2 = clock();
	for (i; i < 10000; i++)
	{
		printf("\e[1;1H\e[2J");
		printf("Time taken to execute %d\n", i);
	}


	t2 = clock() - t2;


	printf("Time taken by system\(\"clear\") %f\n",
		((double)t1) / CLOCKS_PER_SEC);
	printf("Time taken regex %f",
		((double)t2) / CLOCKS_PER_SEC);
  regex = 	((double)t2) / CLOCKS_PER_SEC * 1000000;
  rn = regex;

  printf("\n \n \n RANDOM NUMBER     %d \n", rn);

	return 0;
}

//github/rounakkole/C/
