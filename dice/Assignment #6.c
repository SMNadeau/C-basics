/* CS 153 PROGRAM ASSIGNMENT #6
	Dice Game
	Shad Nadeau
	10/20/20
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDie()
{
  static int initialized = 0;
  int num;
  
  if ( !initialized )
  {
    //printf("Initializing Die!!!\n\n");
    srand( time(NULL) );
    initialized = 1;
  }
  num = rand()%6 + 1 ;
  return num;
}

int playerTurn()
{
	int r;
	
	r = throwDie();
		
	return r;
}

int compTurn(int rolls)
{
	int r1, r2, x = 1;
	r1 = throwDie();
	printf("Computer throws a %d", r1);
	while (rolls > x)
	{
		r2 = throwDie();
		printf("Computer throws a %d", r2);
		if(r2 > r1)
		{
			r1 = r2;
		}
		
	}
	return r1;
}

void main()
{
	int x = 0, pScore, cScore, pWins = 0, cWins = 0, a, rolls = 0;
	
	while(x < 7)
	{
		printf("Round %d", (x + 1));
		printf("Player's turn: ");
		//gets();
		while(a != 'n' || a != 'N')
		{
			rolls++;
			pScore = playerTurn();
			
			printf("You throw a %d\n", r);
			
			printf("Do you wish to throw again? [Y or N]");
			scanf("%c", &a);
		}
		
		
		
		printf("Computer's turn: ");
		
		//gets();
		
		cScore = compTurn(rolls);
		if(pScore > cScore)
		{
			pWins++;
			printf("Human wins the round. player: %d. computer: %d", pWins, cWins);
		}
		else 
		{
			cWins++;
			printf("Computer wins the round. player: %d. computer: %d", pWins, cWins);
		}
		
		
		/*resets round and increments round counter*/
		a = 'Y';
		rolls = 0;
		x++;
	}
	
	if(pWins > cWins)
	{
		printf("Human wins the game.");
	}
	else
	{
		printf("Computer wins the game.");
	}
	return 0;
}

