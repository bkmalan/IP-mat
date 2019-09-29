#include<stdio.h>

int main()
{
	int n = 4,row[4],bk[4][4] = {96,144,48,240,94,141,47,235,1313,1515,1212,606,3185,3675,2940,1470};
	for(int i = 0; i < n; i++)	{	
		for(int j= 0; j < n; j++)		
			printf("%d ",bk[i][j]);
			row[i] = (bk[i][0]^bk[i][1]) - (bk[i][2]&bk[i][3]);
		printf("\n");
	}		
	printf("The IP address is: %d.%d.%d.%d\n",row[0],row[1],row[2],row[3]);	
	
  return 0;
}	
