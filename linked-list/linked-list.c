#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node 
{

node* front;
//node* back;
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

//Create an array of structures
int i;
int n = 10;
//node array_struct[100];

node** ptr_to_array_of_structs;


ptr_to_array_of_structs = (node**)malloc(n*sizeof(node*));

//initialize array

for(i = 0;i<n;i++)
{
//*(arr + i) = i; 
//printf("%dth Val : %d\n",i,i);
//printf()
*(ptr_to_array_of_structs + i) = newNode(NULL,i);
printf("Value of node attrib %d\n",(**(ptr_to_array_of_structs + i)).val);


}


printf("\n######## The array has been filled up! \n");

for(i=0;i<n;i++)

   {
     /*
     }
     */
    if(i != n-1)
    {
    printf("Value: %d\n",(**(ptr_to_array_of_structs + i)).val);
    (**(ptr_to_array_of_structs + i)).front = *(ptr_to_array_of_structs + i + 1);   

    
 
    }

    if(i == n-1)

    {
    (**(ptr_to_array_of_structs + i)).front == NULL;

    }



   } 


printf("\nAll I have is a FREAKIN LINKED LIST!\n");

for(i=0;i<n;i++)

   {
   if(i != n-1)
    {
    printf("Value of First: %d Address: %p || Value of Linked: %d and Front Address : %p\n", (**(ptr_to_array_of_structs + i)).val,&(**(ptr_to_array_of_structs + i)),(*(**(ptr_to_array_of_structs + i)).front).val,((**(ptr_to_array_of_structs + i)).front));
    //(**(ptr_to_array_of_structs + i)).front = *(ptr_to_array_of_structs + i + 1);
    printf("Print in 2D way : %d",(ptr_to_array_of_structs[i][0]).val); 
    }

 

   }

printf("Print it in classic linked list way");

node* head;

head = (*(ptr_to_array_of_structs));
printf("\nHEAD Value= %d",(*head).val);

//node n1 = head;
node* nn = newNode(NULL,0);
nn = (head);

while(nn->front != NULL)

{
     //node = head;
     //node = node.front;
     printf("\nVALUE: %d",nn->val);  
     nn = nn->front;


}

printf("\nVALUE: %d\n",nn->val);

//free(ptr_to_array_of_structs);


for (i=0;i<n;i++)

{

free(*(ptr_to_array_of_structs+i));

}

return 0;
}
