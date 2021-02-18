#include<stdio.h>
int main()
{
    int x,y,max=0,i=0,a,b;
    for (x=0;x<5;x++)
    {
        y = 0;
        for (a=0;a<4;a++)
        {
            scanf("%d",&b);
            y = y+b;
        }
            if (max<y)
            {
                max = y;
                i = x+1;
            }
    }
    printf("%d %d",i,max);
    return 0;
}
