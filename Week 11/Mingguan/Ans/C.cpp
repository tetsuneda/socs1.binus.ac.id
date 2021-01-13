#include <stdio.h>

int main(){

    int t;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        fscanf(fp, "%d", &n);
        int arr[n + 5], perim = 0, area = 0;
        for(int j = 0; j < n; j++)
            fscanf(fp, "%d", &arr[j]);
        
        for(int j = 0; j < n; j++)
        {
            area  += 4 * arr[j];
            perim += (8 * arr[j] - (4 * (arr[j] - 1)));
            if(j < n - 1)
            {
                if(arr[j] >= arr[j + 1]) 
                    perim -= 4 * arr[j + 1];    
                else
                    perim -= 4 * arr[j];
            }
        }
        printf("Case #%d: %d %d\n", i, perim, area);
    }
    fclose(fp);
    
    return 0;
}