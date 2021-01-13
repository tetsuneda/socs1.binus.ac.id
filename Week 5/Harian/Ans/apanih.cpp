#include <stdio.h>
#include <math.h>

int main()
{
    int t,i,n,counter=0;
    scanf("%d",&t);
    for (i = 1; i<= t;i++)
    {
        scanf("%d", &n);
        printf("Case #%d: ", i);
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                printf("%d ^ ",i);
                while (n%i == 0)
                {
                  n = n/i;
                  counter++;
                }
                printf("%d",counter);
                counter = 0;
                if(n > 1)
                {
                    printf(" * ");
                }
            }
        }
        if (n > 1)
        {
            printf("%d ^ 1", n);
        }
        printf("\n");
    }
    return 0;
}
