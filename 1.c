#include <stdio.h>
int main()
{
	float score;
	
	printf("���������ĳɼ�:");
	scanf("%f",&score);
	if(score>100)
		printf("���������Σ�\n");
	else if(score>=90 && score<=100)
		printf("����\n");
	else if(score>=80 && score<90)
	    printf("����\n");
	else if(score>=70 && score<80)
		printf("����\n");
	else
	printf("����\n");

	  
	return 0;
}


 












