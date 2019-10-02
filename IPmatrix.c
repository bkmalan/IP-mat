#include<stdio.h>

int main()
{
  long n = 4,row[4],bk[4][4];
  for(int i = 0; i < n; i++)
    for(int j= 0; j < n; j++)
    scanf("%ld",&bk[i][j]);
  printf("===============\n");
  for(int i = 0; i < n; i++)  { 
    for(int j= 0; j < n; j++)   
      printf("%d ",bk[i][j]);
      row[i] = (bk[i][0]^bk[i][1]) - (bk[i][2]&bk[i][3]);
    printf("\n");
  }   
  printf("The IP address is: %d.%d.%d.%d\n",row[0],row[1],row[2],row[3]); 
  
  if((row[0] == 192) && (row[1] == 168 )&&( row[2] == 174 )&&( row[3] == 238))
    printf("Good Mat\n");

  return 0;
}
