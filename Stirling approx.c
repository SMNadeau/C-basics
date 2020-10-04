#include <stdio.h>
#include <math.h>

/*computes N factorial (N!) by loop*/

double factorial(int N)
{
    double x = 1, factorial = 1;
    while(x <= N)
    {
        factorial *= x;
        x++;
    }
    return factorial;
}

/* computes x^n by multiplying in a loop*/

double myPow(double x, int n)
{
    int y = 1;
    double p = x;

    while(y < n)
    {
        p *= x;
        y++;
    }
    return p;
}   
/*computes N factorial (N!) by formula*/
double stirling(int N)
{
    double stir;
    stir = sqrt((2 * M_PI * N)) * myPow((N / M_E), N);
    return stir;
}

int main()
{
   
    int N, x = 0;
    double fact, stir;
    printf("Please enter a value N:\n");
    
    scanf("%d", &N);
    printf("n               n!              approx.\n");
    printf("--------+-------------------+-------------------\n");
    while(x <= N)
    {
       fact = factorial(x); 
       stir = stirling(x);
       printf("%3d %20.0lf       %20.4lf   \n",x , fact, stir);
       x++;
    }
    
    return 0;
    
}