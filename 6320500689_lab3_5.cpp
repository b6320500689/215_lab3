#include <stdio.h>
int main ()
{
    int n,n2,i,k=0,ch;
    scanf ("%d",&n);
    n2 = n;
    for (i=2; ;i++)
    {
        if (n2%i == 0)
        {
            k++;
        }
        else
        {
            break;
        }

    }
    if (k>3 || k<3)
    {
            printf ("%d is not a Lucky Number.",n);
    }
        else
    {
             printf ("%d is a Lucky Number.",n);
    }
    return 0;
}
