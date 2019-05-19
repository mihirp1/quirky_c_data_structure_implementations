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


int arr[10] = {0,13,44,7,3,4,5,6,7,8};
int n = 10;
int count = 0;
int i;
int temp = 0;

while(count != n)
{
  for(i=0;i<n;i++)

  {

    if(arr[i] > arr[i+1] && i != n-1)
    {
    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1]=temp;
    }

  }
  count++;

}

for(i=0;i<n;i++)

{

printf("arr[i] : %d %d\n",arr[i],i);

}


return 0;
}
