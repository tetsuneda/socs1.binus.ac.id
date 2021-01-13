#include <stdio.h>
#define ll long long

int main(){

	int n, pion;
	scanf ("%d %d", &n, &pion); fflush(stdin);
	char papan[255][255];
	for (int i = 1; i <= pion; i++)
	{
			int x, y;
			scanf ("%d %d", &x, &y); fflush(stdin);
			papan[x][y] = '1';
	}
	
	int tc;
	scanf ("%d", &tc);
	for (int q = 1; q <= tc; q++)
	{
		int ctr[4] = {0}, a, b;
		scanf ("%d %d", &a, &b);
		
		//KNIGHT
		// atas 1 kiri kanan 2
		if (a-1 >= 1 && a-1 <= n && b-2 >= 1 && b-2 <= n && papan[a-1][b-2] == '1') ctr[1]++;
		if (a-1 >= 1 && a-1 <= n && b+2 >= 1 && b+2 <= n && papan[a-1][b+2] == '1') ctr[1]++; 
		// atas 2 kiri kanan 1
		if (a-2 >= 1 && a-2 <= n && b-1 >= 1 && b-1 <= n && papan[a-2][b-1] == '1') ctr[1]++;
	   	if (a-2 >= 1 && a-2 <= n && b+1 >= 1 && b+1 <= n && papan[a-2][b+1] == '1') ctr[1]++; 
		// bawah 1 kiri kanan 2
		if (a+1 >= 1 && a+1 <= n && b-2 >= 1 && b-2 <= n && papan[a+1][b-2] == '1') ctr[1]++;
		if (a+1 >= 1 && a+1 <= n && b+2 >= 1 && b+2 <= n && papan[a+1][b+2] == '1') ctr[1]++;
		// bawah 2 kiri kanan 1
		if (a+2 >= 1 && a+2 <= n && b-1 >= 1 && b-1 <= n && papan[a+2][b-1] == '1') ctr[1]++;
		if (a+2 >= 1 && a+2 <= n && b+1 >= 1 && b+1 <= n && papan[a+2][b+1] == '1') ctr[1]++;
		
		//BISHOP
		
		int x = a;
		int y = b;
		
		//kiri miring atas
		while (x >= 1 && y <= n)
		{
			x--;
			y++;
			if (papan[x][y] == '1')
			{
				ctr[2]++;
				break;
			}
		}
		//kiri miring bawah
		x = a;
		y = b;
		while(x <= n && y <= n)
		{
			x++;
			y++;
			if (papan[x][y] == '1')
			{
				ctr[2]++;
				break;
			}
		}
		//kanan miring atas
		x = a;
		y = b;
		while (x >= 1 && y >= 1)
		{
			x--;
			y--;
			if (papan[x][y] == '1')
			{
				ctr[2]++;
				break;
			}
		}
		//kanan miring bawah
		x = a;
		y = b;
		while (x <= n && y >= 1)
		{
			x++;
			y--;
			if (papan[x][y] == '1')
			{
				ctr[2]++;
				break;
			}
		}
		
		//ROOK
		x = a;
		y = b;
		
		//atas
		while (x >= 1)
		{
			x--;
			if (papan[x][y] == '1')
			{
				ctr[3]++;
				break;
			}
		}
		//bawah
		x = a;
		y = b;
		while (x <= n)
		{
			x++;
			if (papan[x][y] == '1')
			{
				ctr[3]++;
				break;
			}
		}
		//kiri
		x = a;
		y = b;
		while (y >= 1)
		{
			y--;
			if (papan[x][y] == '1')
			{
				ctr[3]++;
				break;
			}
		}
		//kanan
		x = a;
		y = b;
		while (y <= n)
		{
			y++;
			if (papan[x][y] == '1')
			{
				ctr[3]++;
				break;
			}
		}
		int max = ctr[1];
		for (int i = 1; i <= 3; i++)
		{
			if (max < ctr[i]) max = ctr[i];
		}
		for (int i = 1; i <= 3; i++)
		{
			if (max == ctr[i])
			{
				printf ("%d\n", i);
				break;
			}
		}
	}

	return 0;
}

