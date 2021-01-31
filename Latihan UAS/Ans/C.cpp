#include <stdio.h>
#include <string.h>

struct Email {
    char user[255];
    char domain[255];
};

int main() {

    int n;
    scanf ("%d", &n);
    Email email[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%[^@]@%[^\n]", email[i].user, email[i].domain);
        getchar();
    }
    char target[255];
    scanf ("%[^\n]", target); getchar();

    int ctr = 0;
    for (int i = 0; i < n; i++)
        if (strcmp(email[i].domain, target) == 0)
            ctr++;
    
    printf ("%d\n", ctr);

    return 0;
}

/*
4
jojo_jotaro@yagoo.com
lili_lee@beenoose.ac.id
bibi_the.bee@boogle.com
big_grass_field@yagoo.com
yagoo.com
*/