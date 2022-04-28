#include<stdio.h>  
int sumOfDigits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n", sumOfDigits(no));
   }
 return 0;
}
