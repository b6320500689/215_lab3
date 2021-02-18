#include<stdio.h>
int main()
{
    unsigned int k=1,i;
	if(k>=1 && k<=1000)
		scanf("%d",&k);
		
	if(k == 1)
		printf("1\n");
		
    for(i=2; k!=1; i++)
    {
        while(k%i == 0)
        {
            k = k/i;
            printf("%d\n",i);
            
            if(k/i == 0)
                printf("%d",k/i);
        }
    }
    return 0;
}
