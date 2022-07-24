// checks if a number is prime

#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Enter Number: \n");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("No\n");
	    return 0;
    }
    
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("No\n");
	    return 0;
        }
    }
    printf("Yes\n");
    return 1;
}
