#include <stdio.h>
void main()
{
    int i, n, a=0, b=1, c=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: %d, %d, ",a,b);
    for (i=3; i <= n; ++i)
    {
        c= a+b;
        a = b;
        b = c;
        printf("%d, ",c);
    }
}
