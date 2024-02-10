#include <stdio.h>
int combination(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    if (r == 1)
        return n ;
    return combination(n - 1, r) + combination(n - 1, r - 1);
}
int main()
{
    int n, r, m;
    scanf("%d %d", &n, &r);
    if (n < 0 || r < 0 || n < r)
    {
        printf("Invalid input");
    }
    else
    {
        int res = combination(n, r);
        printf("%d", res);
    }

    return 0;
}