//by Ramtin Alikhani

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "VoteOn.h"

int VoteOn(void** Instances, int nInstances, int nSize)
{
	int i, j;
	int* sumArray = (int*)calloc(nInstances , sizeof(int));
	int maxIndex = -1; // will be returned if none 
	int maxValue = 0;

	for (i = 0; i < nInstances; i++) 
	{
		for (j = i +1; j < nInstances; j++)
		{
			if (memcmp(Instances[i], Instances[j], nSize) == 0)
			{
				sumArray[i]++;
			}
		}
		if (sumArray[i] > maxValue) 
		{
			maxValue = sumArray[i];
			maxIndex = i;
		}
	}

	return (maxIndex);
}