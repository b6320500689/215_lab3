#include<stdio.h>
int main(){
	int i=0,j,z=0,k=0;
	long long x=0,y=0;
		scanf("%lld",&x);
		y = x;
		
	if(x==0 || x==1 || y==0 || y==1)
		printf("2");
		
	while(x>1 && y>1)
		if((x%2==0 || x%3==0 || x%5==0 || x%7==0) && (x!=2 && x!=3 && x!=5 && x!=7))
		{ 
			x--;
			z++;
  		}
		else if((y%2==0 || y%3==0 || y%5==0 || y%7==0) && (y!=2 && y!=3 && y!=5 && y!=7))
		{
			y++;
			k++ ;
		}
		else if(z <= k)
		{
			printf("%lld ",x);
			break;
    	}
		else if(k <= z)
		{
			printf("%lld ",y);
			break;
		}
	return 0;
}
