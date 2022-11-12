#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	int cnt=0;
	float avg;
	for(i=1;i<=100;++i)
	{
		if(i%2==1)
		{	sum=sum+i;
		    ++cnt;
		}
	}
	avg=1.0*sum/cnt;  //1.0默认为double类型
	printf("sum=%d\n",sum)
	printf("cnt=%d\n",cnt);
	printf("avg=%lf\n",avg);
	return 0;
}


 












