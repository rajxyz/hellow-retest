#include<stdio.h>

     void abc(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            printf("%d\t" ,arr1[i++]);
 
        else if (arr2[j] < arr1[i])
            printf("%d\t" ,arr2[j++]);
 
        else {
            printf("%d\t" ,arr2[j++]);
            i++;
        }
    }
 
    
    while (i < m)
        printf("%d\t", arr1[i++]);
 
    while (j < n)
        printf("%d\t" ,arr2[j++]);
}
void main(void)
{  int i,a[40],b[40],m,n;
printf(" enter size of set 1");
scanf("%d",&m);
printf(" enter elemnet of set 1");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf(" enter size of set 2");
scanf("%d",&n);
     printf(" enter elemnet of set 2");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
abc(a,b,m,n);

}