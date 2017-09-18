#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	FILE* fp;
	fp=fopen("noiseSIN.dat","r");
	int maxDataSize=500;
	float original[maxDataSize];
	int dataSize = dataLoad(fp, &original, maxDataSize);
	fclose(fp);
	int winSize = 5; /*Must be Odd*/
	float output[dataSize];
	smooth(&original, &output, winSize, dataSize);
	fp=fopen("movAvgOut.dat","w");
	for (int n = 0; n < dataSize; n++)
	{
		fprintf(fp,"%.4f\n",output[n]);
	}
	fclose(fp);
}