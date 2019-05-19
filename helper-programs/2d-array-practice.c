#include<stdio.h>
#include<stdlib.h>

int main()

{

int i,j,r,c;

r = 5;
c = 5;


int** arr = (int**) malloc(r*sizeof(int*));


for(i=0;i<r;i++)

{

*(arr+i) = (int*) malloc(c*sizeof(int));

}


for(i=0;i<r;i++)

{

  for(j=0;j<c;j++)

  {
     
  *(*(arr+i) +j) = i+j;

  printf("*((arr+i)* +j) : %d\n",*(*(arr+i) +j));

  }


}



return 0;

}
