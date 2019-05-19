#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node 
{

node* front;
node* back;
int val;

};

node* newNode(node* front,node* back,int val)

{
      node s1;
      s1.val = val;
      //printf("Value of node S1 is : %d\n",s1.val);
      node* node_ptr;
      node_ptr = malloc(sizeof(node));
      node_ptr = &s1;
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

//Create an array of structures
int i;
//node array_struct[100];

node** ptr_to_array_of_structs;

ptr_to_array_of_structs = (node**)malloc(100*sizeof(node*));

//int arr[100];
int n = 10;
//initialize array

for(i = 0;i<n;i++)
{
//*(arr + i) = i; 
//printf("%dth Val : %d\n",i,i);
//printf()
*(ptr_to_array_of_structs + i) = newNode(NULL,NULL,i);
printf("Value of node attrib %d\n",(**(ptr_to_array_of_structs + i)).val);


}


printf("\n######## The array has been filled up! \n");

for(i=0;i<n;i++)

   {
     /*
     if(i == 0)
     { 
     node* head_ptr;

     head_ptr = newNode(NULL,NULL,arr[i]);

     //newnode(NULL,)
     }
     */

    printf("Value: %d\n",(**(ptr_to_array_of_structs + i)).val);


   } 






return 0;
}
