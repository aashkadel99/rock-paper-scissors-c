#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void displayChoices();
int userChoice();
int computerChoice();


int main(){
	
	int tries = 3, x, y;
	
	x = userchoice();
	y = computerChoice()
	
	if (x == 1 and y == 2){
			
	}
	
	
	
	
	return 0;
}

void displayChoices(){
	printf("*************");
	printf("1. Rock\n");
	printf("2. Paper\n");
	printf("3. Scissors\n");
	printf("*************");
}

int userChoice(){
	int play;
	displayChoices();
	printf("Enter your play: ");
	scanf("%d", &play);
	return play;
}

int computerChoice(){
	int number;
	srand(time(0));
	number = (rand() % 3) + 1;
	return number;
}


