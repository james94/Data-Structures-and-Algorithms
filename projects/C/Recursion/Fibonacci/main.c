#include <stdio.h>

// Fibonacci using Iteration, Recursion, Memoization Recursion

// Iteration approach
int fib(int n)
{
    int t0 = 0, t1 = 1, s = 0;

    if(n <= 1)
    {
        return n;
    }

    for(int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// Recursion approach
int rfib(int n)
{
    if(n <= 1)
    {
        return n;
    }
    return rfib(n - 2) + rfib(n - 1);
}

// Memoization Recursion approach
int F[10];
int mrfib(int n)
{
    if(n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n - 2] == -1)
        {
            F[n - 2] = mrfib(n - 2);
        }
        if(F[n - 1] == -1)
        {
            F[n - 1] = mrfib(n - 1);
        }
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
    
}

int main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    printf("%d \n", mrfib(5));
    return 0;
}