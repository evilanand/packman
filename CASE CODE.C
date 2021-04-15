#include<stdio.h>
			
int main()
{
	int n;
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Food item - Pizza\n");
			printf("Price - 239");
			break;
		case 2:
			printf("Food item - Burger\n");
			printf("Price - 129");
			break;	
		case 3:
			printf("Food item - Pasta\n");
			printf("Price - 179");
			break;
		case 4:
			printf("Food item - French Fries\n");
			printf("Price - 99");
			break;	
		case 5:
		    printf("Food item - Sandwitch\n");
			printf("Price - 149");
			break;
		default:
			printf("Your choice is not there:");		
	}
	return 0;
}
