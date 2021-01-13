#include <stdio.h>
#include <stdlib.h>
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })

  
// initializing the matrix. 
int dp[8][8] = { 0 }; 
  
int getsteps(int x, int y,  
             int tx, int ty) 
{ 
    // if knight is on the target  
    // position return 0. 
    if (x == tx && y == ty) 
        return dp[0][0];
    else { 
          
        // if already calculated then return 
        // that value. Taking absolute difference. 
        // Kalau dia udah pernah ada, langsung aja return hasil sebelumnya
        if (dp[abs(x - tx)][abs(y - ty)] != 0) 
            return dp[abs(x - tx)][abs(y - ty)]; // Nilai harus di abs karena index tidak mungkin negatif
              
        else { 
  
            // there will be two distinct positions 
            // from the knight towards a target. 
            // if the target is in same row or column 
            // as of knight than there can be four 
            // positions towards the target but in that 
            // two would be the same and the other two 
            // would be the same. 
            int x1, y1, x2, y2; // Dia ada 2 kemungkinan gerak menuju target
              
            // (x1, y1) and (x2, y2) are two positions. 
            // these can be different according to situation. 
            // From position of knight, the chess board can be 
            // divided into four blocks i.e.. N-E, E-S, S-W, W-N . 
            
            if (x <= tx) { //Kalau posisi kuda diatas target
                
                if (y <= ty) { //Kalau posisi kuda di kiri target
                    x1 = x + 2; 
                    y1 = y + 1; 
                    x2 = x + 1; 
                    y2 = y + 2; 
                } 

                else //Kalau posisi kuda di kanan target
                { 
                    x1 = x + 2; 
                    y1 = y - 1; 
                    x2 = x + 1; 
                    y2 = y - 2; 
                } 
            } 

            else //Kalau posisi kuda dibawah target
            { 
                if (y <= ty) //Kalau posisi kuda di kanan target
                { 
                    x1 = x - 2; 
                    y1 = y + 1; 
                    x2 = x - 1; 
                    y2 = y + 2; 
                } 

                else //Kalau posisi kuda di kiri target
                { 
                    x1 = x - 2; 
                    y1 = y - 1; 
                    x2 = x - 1; 
                    y2 = y - 2; 
                } 
            } 
              
            // ans will be, 1 + minimum of steps  
            // required from (x1, y1) and (x2, y2). 
            dp[abs(x - tx)][abs(y - ty)] =  
                           min(getsteps(x1, y1, tx, ty),  
                           getsteps(x2, y2, tx, ty)) + 1; 
                             
            // exchanging the coordinates x with y of both 
            // knight and target will result in same ans. 
            dp[abs(y - ty)][abs(x - tx)] =  
                           dp[abs(x - tx)][abs(y - ty)]; 
            return dp[abs(x - tx)][abs(y - ty)]; 
        } 
    } 
} 
  
int main() { 
    int n, x, y, tx, ty, ans; 
    /*
        n -> ukuran papan
        x -> koordinat x kuda
        y -> koordinat y kuda
        tx -> koordinat x target
        ty -> koordinat y target
        ans -> penampung jawaban
    */
    n = 8; // inisialisasi papan ukuran 8*8
      
    // (x, y) coordinate of the knight. 
    // (tx, ty) coordinate of the target position. 
    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        char knight[3], target[3];
        scanf ("%s %s", knight, target);
        int x = knight[0] - 'A';
        int y = knight[1] - '0';
        int tx = target[0] - 'A';
        int ty = target[1] - '0';

  
    // (Exception) these are the four corner points  
    // for which the minimum steps is 4. 
    // Corner case (spesial) & ini wajib karna hasil pasti 4
    if ((x == 1 && y == 1 && tx == 2 && ty == 2) ||  
        (x == 2 && y == 2 && tx == 1 && ty == 1)) 
            ans = 4; 
    else if ((x == 1 && y == n && tx == 2 && ty == n - 1) || 
             (x == 2 && y == n - 1 && tx == 1 && ty == n)) 
                ans = 4; 
    else if ((x == n && y == 1 && tx == n - 1 && ty == 2) ||  
             (x == n - 1 && y == 2 && tx == n && ty == 1)) 
                ans = 4; 
    else if ((x == n && y == n && tx == n - 1 && ty == n - 1) ||  
             (x == n - 1 && y == n - 1 && tx == n && ty == n)) 
                ans = 4; 
    else { 
        // dp[a][b], here a, b is the difference of 
        // x & tx and y & ty respectively. 
        // ini juga wajib!
        dp[1][0] = 3; 
        dp[0][1] = 3; 
        dp[1][1] = 2; 
        dp[2][0] = 2; 
        dp[0][2] = 2; 
        dp[2][1] = 1; 
        dp[1][2] = 1; 
  
        ans = getsteps(x, y, tx, ty); 
    } 
        printf("Case #%d: ", q);
        printf ("%d\n", ans);
    }
  
    return 0; 
} 

// A7 E7

// %s %s, knight, target

/*
int kx = knight[0] - 'A'
int ky = knight[1] - '0'
int tx = target[0] - 'A'
int ty = target[1] - '0'
*/