#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	
	for(i=3;i<=12;++i)
	{	
		if(i%3==0)                     //如果i能被三整除 
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;
}


 












