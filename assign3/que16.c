#include<stdio.h>
#include<stdlib.h>

void loop(void);
int guess(void);
int magicno(void);
int main()
{
	loop();
	return 0;
}

int guess(void)
{
	int g;
	printf("Enter your guess :");
	scanf("%d",&g);
	return g;
}

int magicno(void)
{
	int upper = 1000;
	int lower = 1;
	int magic = (rand()%(upper - lower + 1))+lower;
	return magic;
}
void loop(void)
{
	int attemp=0;
	printf("...........Welcome to MagicNo Game...........\n");
	label:
	do
	{
		attemp++;
		int n = guess();
		int m = magicno();
		int flag;
		if(n == m)
		{
			printf("Congratulations!!!! you won the game..\n");
		}

		else if(attemp == 10)
		{
			printf("U Passed up the Attempts ..\n");
			printf("LOST the GAME\n");
			printf("\n");
			printf("Want to try u r luck again ...\npress 1\notherwise 0\n");
			scanf("%d",&flag);
			if(flag == 1)
			{
				attemp = 0;
				goto label;
			}
			else
			{
				return ;
			}
		}
		else if(n < m)
		{
			printf("RIGHT...\n");
		}
		else if(n > m)
		{
			printf("LEFT...\n");
		}
		else
		{
			printf("Invalid no...\n");
		}
	}while(attemp<=10);
	
}

