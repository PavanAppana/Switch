#include<stdio.h>
void main()
{
	int choice = 0;
	printf("Enter the choice what to eat");
	scanf("%d",&choice);
	switch (choice) 
	{
 		case 1:
		 	printf("Food item - Burger\n\nPrice - Rs 129");  
			break;
		case 2: 
			printf("Food item - Pizza\n\nPrice - Rs 239"); 
			break;
		case 3: 
			printf("Food item - French Fries\n\nPrice - Rs 99"); 
			break;
		case 4: 
			printf("Food item - Sandwich\n\nPrice - Rs 149"); 
			break;
		case 5: 
			printf("Food item - Pasta\n\nPrice - Rs 179"); 
			break;			
	 	default:
			printf("Invalid choice");  
	}	
}
