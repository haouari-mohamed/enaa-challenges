#include <stdio.h>
int main()
{
int n,c,r;

printf("Entrer the number of rows=");
scanf("%d",&n);

for(r=1 ; c<=n ; r++)
{
    for(c =  1 ; c <= n - r ; c++)
    {
        printf(" ");
    }
    for(c = 1 ; c <= 2 * r - 1 ; c++)
    {
        printf("*");
    }
    printf("\n");
}

for(r=n-1 ; r>=1 ; r--)
{
    for(c =  1 ; c <= n - r ; c++)
    {
        printf(" ");
    }
    for(c = 1 ; c <= 2 * r - 1 ; c++)
    {
        printf("*");
    }
    printf("\n");
}

}
