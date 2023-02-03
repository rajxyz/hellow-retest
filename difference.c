#include<stdio.h>
#include<conio.h>
  void main()
  { int a[40],b[40],m,n,i,j;
  printf(" enter size of set A\n");
  scanf("%d",&m);
  printf("enter elementof set A\n");
  for(i=0;i<m;i++)
  scanf("%d",&a[i]);
  printf(" enter size of set B\n");
  scanf("%d",&n);
 printf("enter elementof set B\n");
  for(i=0;i<n;i++)
  scanf("%d",&b[i]);
  printf(" the differ of set A-B is \n");
  for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
  {if(a[i]==b[j])
  break;} if(j==n)
  printf("%d\t",a[i]);}
   printf(" \nthe differ of set B-A is \n");
   for(j=0;j<n;j++)
   { for(i=0;i<m;i++)
         {if(b[j]==a[i])
         break;}if(i==m)
  printf("%d\t",b[j]);}
      getch();

  }