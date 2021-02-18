#include<stdio.h>
int main()
{
    int k=1,i=2;
		scanf("%d",&k);
		
	if(k == 1)
		printf("1\n");
		
    for(i=2; k!=1; i++)
    {
        while(k%i == 0)
        {
            k = k/i;
            printf("%d\n",i);
        }
    }
    printf ("0");
    return 0;
}
