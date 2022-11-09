#include <stdio.h>
int main()
{
	float score;
	
	printf("请输入您的成绩:");
	scanf("%f",&score);
	if(score>100)
		printf("这是在做梦！\n");
	else if(score>=90 && score<=100)
		printf("优秀\n");
	else if(score>=80 && score<90)
	    printf("良好\n");
	else if(score>=70 && score<80)
		printf("及格\n");
	else
	printf("加油\n");

	  
	return 0;
}


 












