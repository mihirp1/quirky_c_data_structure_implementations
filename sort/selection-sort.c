#include<stdlib.h>
#include<stdio.h>

typedef struct node node;

struct node
{

node* left;
node* right;
//node* rear;
int val;

};

node* newNode(node* front,int val)

{
      node s1;
      s1.val = val;
      //printf("Value of node S1 is : %d\n",s1.val);
      node* node_ptr;
      node_ptr = malloc(sizeof(node));
      (*node_ptr).val = val;
      //printf("Value of i is : %d",val);
      //printf("Size Of Full Node: %lu\n",sizeof(node));
      //printf("Size of int %lu\n",sizeof(int));
      //printf("Size of front pointer: %lu\n",sizeof(front));
      //printf("Size of back pointer: %lu\n",sizeof(back));
      //node.val = val;

return node_ptr;

}

int main()

{


int arr[10] = {0,13,44,7,3,77,62,6,70,8};
int arr1[10];
int n = 10;
int count = 0;
int i=0;
int temp = 0;
int lowest = 100000;
int index = 0;
int highest_index = 0;
while(count < n+1)
{

  while(i<n+1)

  {

    if(arr[i] < lowest)
      {
      lowest = arr[i];
      index = i;
      }
      


      i++;
      if(i == n)
        {
        printf("I AM INSIDE\n");
        printf("SMALLEST IS %d\n",lowest);
        //index = i;i
        highest_index = index;
        //arr1[count] = lowest;
    
        //lowest = arr[i];
        }

  }
   temp = arr[count];
   arr[highest_index] = temp;
   arr1[count] = lowest;
   i = count + 1;
   count++;
   lowest = 100000;
}

for(i=0;i<n;i++)

{

printf("arr[i] : %d %d\n",arr1[i],i);

}


return 0;
}
