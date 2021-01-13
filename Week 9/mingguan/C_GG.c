#include <stdio.h>
#include <stdlib.h>
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })

int dp[8][8] = {0}; 
  
int getsteps(int x, int y, int tx, int ty) { 
    if (x == tx && y == ty) 
        return dp[0][0]; 
    else { 
        if (dp[abs(x - tx)][abs(y - ty)] != 0) 
            return dp[abs(x - tx)][abs(y - ty)]; 
              
        else { 
  
            int x1, y1, x2, y2; 
              
            if (x <= tx) {
                if (y <= ty) { 
                    x1 = x + 2; 
                    y1 = y + 1; 
                    x2 = x + 1; 
                    y2 = y + 2; 
                } else { 
                    x1 = x + 2; 
                    y1 = y - 1; 
                    x2 = x + 1; 
                    y2 = y - 2; 
                } 
            } else { 
                if (y <= ty) { 
                    x1 = x - 2; 
                    y1 = y + 1; 
                    x2 = x - 1; 
                    y2 = y + 2; 
                } else { 
                    x1 = x - 2; 
                    y1 = y - 1; 
                    x2 = x - 1; 
                    y2 = y - 2; 
                } 
            } 
              
            dp[abs(x - tx)][abs(y - ty)] = min(getsteps(x1, y1, tx, ty), getsteps(x2, y2, tx, ty)) + 1; 
            dp[abs(y - ty)][abs(x - tx)] = dp[abs(x - tx)][abs(y - ty)]; 
            return dp[abs(x - tx)][abs(y - ty)]; 
        } 
    } 
} 


int main() {

    int tc, n = 8, kx, ky, tx, ty, ans; 
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        char knight[3];
        char target[3];
        scanf ("%s %s", knight, target);
        kx = knight[0] - 'A';
        ky = knight[1] - '0';
        tx = target[0] - 'A';
        ty = target[1] - '0';

        if ((kx == 1 && ky == 1 && tx == 2 && ty == 2) || (kx == 2 && ky == 2 && tx == 1 && ty == 1)) 
	        ans = 4; 
	    else if ((kx == 1 && ky == n && tx == 2 && ty == n - 1) ||(kx == 2 && ky == n - 1 && tx == 1 && ty == n)) 
	        ans = 4; 
	    else if ((kx == n && ky == 1 && tx == n - 1 && ty == 2) || (kx == n - 1 && ky == 2 && tx == n && ty == 1)) 
            ans = 4; 
	    else if ((kx == n && ky == n && tx == n - 1 && ty == n - 1) || (kx == n - 1 && ky == n - 1 && tx == n && ty == n)) 
	        ans = 4; 
        else
        {
            dp[1][0] = 3;
            dp[0][1] = 3;
            dp[1][1] = 2;
            dp[2][0] = 2;
            dp[0][2] = 2;
            dp[2][1] = 1;
            dp[1][2] = 1;
            ans = getsteps(kx, ky, tx, ty);
        }
        printf("Case #%d: ", q);
        printf ("%d\n", ans);
    }
    return 0;
}