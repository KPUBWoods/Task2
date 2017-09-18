#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int smooth(float* original, float* output, int winSize, int dataSize)
{
	if (winSize % 2 != 0)
	{
		for (int n=0;n<dataSize;n++)
		{
			output[n]=0;
			if (n > (((winSize-1)/2)-1 || n < dataSize-((winSize-1)/2)-1))
			{
				for(int m = 0 - ((winSize-1) / 2);m<=0+((winSize-1)/2);m++)
				{
					output[n]=output[n]+original[n+m];
				}
				output[n]=output[n]/(float)winSize;
			}
			else
			{
				output[n]=original[n];
			}
		}
	}
	else
	{
		printf("Needs Odd Window Size");
	}
	return 0;
}