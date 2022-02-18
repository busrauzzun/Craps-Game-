#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDice(void){
	int die1=1+rand()%6;
	int die2=1+rand()%6;
	int sumdice=die1+die2;
	return sumdice;
}
int main() {
	int sum;
	srand(time(NULL));
	sum=throwDice();
	int x;
	int score;
	switch (sum){
		case 7: case 11:
			printf("You win.");
			break;
		case 2:	case 3:case 12:
			printf("You lost.");
			break;	
		default:
			score=sum;
			x=1;
			break;
	}
	while(x==1){
		sum=throwDice();
		if(sum==score){
			printf("You win.");
			break;
		}
		else{
			if(sum==7){
				printf("You lost.");
				break;
			}
		}
	}
	return 0;
}
