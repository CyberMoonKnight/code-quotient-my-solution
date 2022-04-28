#include <stdio.h>
/* Include other headers as needed */
void printPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
            printf("%d", j);
        for (int j = 2; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  	int n;
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}
