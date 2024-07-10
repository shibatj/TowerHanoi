#include <stdio.h>
using namespace std;

void solve(int n, char src, char aux, char dest)
{
    if (n == 1)
    {
        printf("%c -> %c\n", src, dest);
        return;
    }
    solve(n - 1, src, aux, dest);
    solve(1, src, dest, aux);
    solve(n - 1, aux, dest, src);
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n, 'A', 'C', 'B');
    return 0;
}
