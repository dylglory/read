#include <stdio.h>
int main()
{
	int i;
	int cnt=0;      //个数一般用cnt表示count的缩写
	for(i=1;i<=100;++i)
       {
		   if(i%2==1)
	       ++cnt;
	   }
	printf("cnt=%d\n",cnt);
	return 0;
}


 












