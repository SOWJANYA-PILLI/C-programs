#include<stdio.h>
int main()
{
	int ch;
	printf("Enter your choice of a number from 1 to 5:  ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nFood item - French Fries\nPrice - Rs 99/-");
				break;
		case 2: printf("\nFood item - Burger\nPrice - Rs 129/-");
				break;
		case 3: printf("\nFood item - Pizza\nPrice - Rs 239/-");
				break;
		case 4: printf("\nFood item - Sandwich\nPrice - Rs 149/-");
				break;
		case 5: printf("\nFood item - Pasta\nPrice - Rs 179/-");
				break;
		default: printf("\nHey...Make sure that your choice must be from 1 to 5..Try again!!!");
	}
	getch();
	return 0;
}
