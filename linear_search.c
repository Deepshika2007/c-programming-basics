#include<stdio.h>
int main()
{
int n,x,found=0;
    printf ("enter ");
   scanf ("%d",&n);
 int myarray[n];
     printf ("elements");
     for (int i=0;i<n;i++)
     {
         scanf ("%d",&myarray[i]);
     }
 printf ("x");
 scanf ("%d",&x);
 for (int i=0;i<n;i++)
 {
     if (myarray[i]==x)
     {
     printf ("found at%d",i);
     found=1;
     }
 }
 if(found==0)
 printf ("not found");
 return 0;
}