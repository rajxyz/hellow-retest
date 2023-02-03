#include<stdio.h>
#include<stdlib.h>
 struct node
 {
    int data;
    struct node*link;

 } *start=NULL;
  void insert_node( int x)
 { struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node*));
  if (temp==NULL)
 printf("memory not availabe");
  else if(start==NULL) 
  {
    temp->data=x;
    temp->link=NULL; 
    start=temp;  
  }
 else{ 
  temp->data=x;
temp->link= start;
start=temp;
 } 
 soritng
 
 }
void delet()
{ struct node *temp=start;
   if(start->link==NULL)
free(start);
else
{
start=start->link;
free(temp);

}

}

void display()
{ struct node *temp=start;
while(temp!=NULL)
{printf("%d\t",temp->data);
temp=temp->link;
}
}
int main()
 {
     int n,m;
 do{
      printf(" enter choice 1 for creat \n 2 for del\n 3 for display\n 4 for exit");
  scanf("%d",&n);
  switch(n)
  { 
      case 1: 
  printf(" enter value you want to enter");
  scanf("%d",&m);
  insert_node(m);
  break;
  case 2: 
  delet();
  break;
  case 3 :
  display();
  break;
      case 4 :
      break;
  }}while (n!=4);
  return 0;
 }
