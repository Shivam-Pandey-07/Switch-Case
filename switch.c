#include<stdio.h>
int main()
{
	int myfav;
	printf("enter a number between 1 to 5:-");
	scanf("%d",&myfav);
	switch(myfav)
	{
		case 1:
			printf("Food:-Sandwich\nPrice:-100");
			break;
		case 2:
			printf("Food:-Salad\nPrice:-99");
			break;
		case 3:
			printf("Food:-Dosa\nPrice:-120");
			break;
		case 4:
			printf("Food:-Juice\nPrice:-80");
			break;
		case 5:
			printf("Food:-Protein Shake\nPrice:-200");
			break;
		default:
			printf("you have eaten enough, time to hit gym");
	}
	return 0;
}
