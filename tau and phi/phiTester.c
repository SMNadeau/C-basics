/*
Shad Nadeau
CS 153
10/2/20
Tau and Phi
*/

#include <stdio.h>
#include "tau.h"


int gcd(int x, int y)
{
    int count = 1, smallest, cd = 0;
    if(x >= y)
    {
        smallest = y;
    }
    else
    {
        smallest = x;
    }
    
    while (count <= smallest)
    {
        if(!(x%count) && !(y%count))
        {
            cd = count;
        }
        count++;
    }
    return cd;
}

int phi(int n)
{
    int count = 0, x = 1, total;
    while (x <= n)
    {
        total = gcd(x, n);
        
        if(total == 1)
        {
            count++;
        }
        x++;
    }
    return count;
}

int sigma(int n)
{
    int x = 1, count = 0;
    
    while(x <= n)
    {
        if(!(n%x))
        {
            count+=x;
        }
        x++;
    }
    return count;
}


int main()
{
    int count, n, z, t;
    
    
    printf("Enter n: ");
    scanf(" %d", &n);
    
    t = tau(n);
    printf("tau(%d) = %d\n", n, t);

    z = phi(n);
    printf("Phi(%d) = %d\n", n, z);
    
    z = sigma(n);
    printf("Sigma(%d) = %d\n", n, z);
    
    if(t == 2 || t == 1)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is composite", n);
    }
    return 0;
}
