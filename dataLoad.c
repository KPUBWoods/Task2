#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int dataLoad(FILE* fp, float* data, int maxSizeData)
{
	char line[32];
	int counter = 0;
	while(fgets(line, sizeof line, fp) != NULL && counter < maxSizeData)
	{
		data[counter] = atof(line);
		counter ++;
	}
	return counter;
}