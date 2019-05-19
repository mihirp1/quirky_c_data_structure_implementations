#include<stdio.h>
#include<stdlib.h>



int main()

{

int r,c,i,j;
r = 5;
c=5;
int** arr2;

arr2 = (int**)malloc(r * sizeof(int*));

for(i=0;i<r;i++)

 {
   arr2[i] = (int*)malloc(c * sizeof(int)); 
 
 }


for(i=0;i<r;i++)


  {

     for(j=0;j<c;j++)

     {
     arr2[i][j] = i+j;
     printf("%d %d %d\n",arr2[i][j],i,j);
     }


  }


return 0;
}
