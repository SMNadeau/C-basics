/*
  CS 153 PROGRAM ASSIGNMENT #3
  Sums
  Shad Nadeau
  9/12/2020
  
  Program takes input and runs it though various functions
  to sum, square sum and cube sum it using loops and formulas
*/

#include <stdio.h>
/*executes sum by loop*/
int sumNloop(int N)
{
    int x = 1, sum = 0;
    
    /*loop adds values to sum until reaching N*/
    while(x <= N)
    {
        sum = sum + x;
        x++;
    }
    
    return sum;
}
/*executes sum by formula given*/
int sumNformula(int N)
{
    int sum = 0;
    sum = N * (N+1);
    sum = sum/2;

    return sum;
}
/*executes sum square by loop*/
int sumSquaresloop(int N)
{
    int sum = 0, square, x = 1;
    
    /*loop squares x then adds the square to sum*/
    while(x <= N)
    {
        square = x * x;
        sum = sum + square;
        x++;
    }
    
    return sum;
}
/*executes sum squared by formula given*/
int sumSquaresformula(int N)
{
    int sum = 0;
    sum = N * (N+1) * ((N * 2) +1);
    sum = sum/6;
 
    return sum;
}
/*executes sum cubed by loop*/
int sumCubesloop(int N)
{
    int sum = 0, cube, x = 1;
    /*loop cubes x then adds the square to sum*/
    while(x <= N)
    {
        cube = x * x * x;
        sum = sum + cube;
        x++;
    }
    
    return sum;
}
/*executes sum cubed by formula given*/
int sumCubesformula(int N)
{
    int sum = 0;
    sum = N * (N+1);
    sum = sum/2;
    
    sum = sum * sum;
    return sum;
}


int main()
{
    int N= 0, sum, formula;
    
    /*prompts user for N*/
    printf("Enter N -->");
    scanf(" %d", &N);
    
    /*calls sum loop and formula functions to calculate and outputs values*/
    sum = sumNloop(N);
    formula = sumNformula(N);
    printf("\nsum 1 to N\n Loop: %8d; Formula: %8d\n", sum, formula);
    
    /*calls sum squares loop and formula functions to calculate and outputs values*/
    sum = sumSquaresloop(N);
    formula = sumSquaresformula(N);
    printf("sum 1 to N**2\n Loop: %8d; Formula: %8d\n", sum, formula);
    
    /*calls sum cubed loop and formula functions to calculate and outputs values*/
    sum = sumCubesloop(N);
    formula = sumCubesformula(N);
    printf("sum 1 to N**3\n Loop: %8d; Formula: %8d\n", sum, formula);
    
    return 0;
}