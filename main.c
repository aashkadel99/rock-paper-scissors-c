#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void displayChoices();
int userChoice();
int computerChoice();
char evaluateWinner(int x, int y);


int main(){
	
	int x, y;
	int playAgain = 1;
	char choice;
	
	while (playAgain == 1){
		x = userChoice();
		y = computerChoice();
		
		if (evaluateWinner(x,y) == 'P'){
			printf("Player wins this round.\n");
		} else if (evaluateWinner(x,y) == 'C') {
			printf("Computer wins this round.\n");
		} else {
			printf("It is a Draw.\n");
		}
		
		printf("Do you want to play again? (Y/N): ");
		scanf(" %c", &choice);
		
		if (choice == 'Y' || choice == 'y'){
			playAgain = 1;
		} else {
			playAgain = 0;
		}
	}
	
	return 0;
}

void displayChoices(){
	printf("*************\n");
	printf("1. Rock\n");
	printf("2. Paper\n");
	printf("3. Scissors\n");
	printf("*************\n");
}

int userChoice(){
	int play;
	displayChoices();
	printf("Enter your play: ");
	scanf("%d", &play);
	
	if(play == 1){
		printf("Player chose Rock.\n");
	} else if (play == 2){
		printf("Player chose Paper.\n");
	} else if (play == 3){
		printf("Player chose Scissors.\n");
	} else {
		printf("Invalid choice.");
	}
	
	return play;
}

int computerChoice(){
	int number;
	
	srand(time(0));
	number = (rand() % 3) + 1;
	
	if(number == 1){
		printf("Computer chooses Rock.\n");
	} else if (number == 2){
		printf("Computer chooses Paper.\n");
	} else {
		printf("Computer chooses Scissors.\n");
	}
	
	return number;
}

char evaluateWinner(int x, int y){
	
	if ((x == 1 && y == 3) || (x == 2 && y == 1) || (x == 3 && y == 2)){
		return 'P';
	} else if ((x == 3 && y == 1) || (x == 1 && y == 2) || (x == 2 && y == 3)){
		return 'C';
	} else {
		return 'D';
	}
}


