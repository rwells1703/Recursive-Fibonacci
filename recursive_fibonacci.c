#include <stdio.h>

#define maximum 15

int *fibonacci(int counter, int sequence[])
{
	int nextItem = sequence[counter-2] + sequence[counter-1];

	if (counter < maximum)
	{
		counter += 1;
		int newSequence[counter];

		for (int i = 0; i < counter - 1; i++)
		{
			newSequence[i] = sequence[i];
		}
		newSequence[counter - 1] = nextItem;

		return fibonacci(counter, newSequence);
	}
	else
	{
		static int outputSequence[maximum];
		for (int i = 0; i < counter; i++)
		{
			outputSequence[i] = sequence[i];
		}

		return outputSequence;
	}
}

void main()
{
	int *outputSequence;
	int inputSequence[2] = {0,1};

	outputSequence = fibonacci(2,inputSequence);

	for (int i = 0; i < maximum; i++)
	{
	  printf("%d ", outputSequence[i]);
	}
}
