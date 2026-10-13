#include<stdio.h>
int main()
{
     int i,j,a[5][5],b[5][5],r,c;
     printf ("enter row and coloumn");
     scanf ("%d%d",&r,&c);
     for (i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         scanf ("%d",&a[i][j]);
     }
     for (i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         b[j][i]=a[i][j];
     }
     for (i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         printf ("%d",b[i][j]);
     printf ("\n");
     }
 return 0;
    }
