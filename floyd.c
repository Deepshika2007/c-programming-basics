#include<stdio.h>
int main()
{
    int r,num=1;
    printf ("r");
    scanf ("%d",&r);
    for (int i=1;i<=r;i++)
    {
        for (int j=1;j<=i;j++)
        {
        printf ("%d ",num);
        num++;
        }
        printf ("\n");
    }
}