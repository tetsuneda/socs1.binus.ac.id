#include <stdio.h>

struct Data {
    int flag = 1;
    int num;
};

int main() {

    int n, tc;
    scanf ("%d %d", &n, &tc);
    Data data[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &data[i].num);

    for (int q = 1; q <= tc; q++)
    {
        int target;
        scanf ("%d", &target);
        for (int i = 0; i < n; i++)
            if (data[i].num == target)
                data[i].flag = 0;
    }

    int max = -1;
    for (int i = 0; i < n; i++)
        if(data[i].num > max && data[i].flag == 1)
            max = data[i].num;

    printf ("Maximum number is %d\n", max);

    return 0;
}

/*
10 3
99 20 10 8 99 4 9 93 66 55
99 94 10
*/