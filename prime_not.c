#include<stdio.h>
int main()
{
 int x;
 printf ("enter");
 scanf ("%d",&x);
 for (int i=2;i<=x;i++)
 {
 if (x%i==0)
  {
     if (x==i)
     {
     printf ("prime");
     break;
     }
     else 
     {
     printf ("not prime");
     break;
     }
  }
 }
 }