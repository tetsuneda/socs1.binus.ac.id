#include <bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin >> tc;
    for (int q = 1; q <= tc; q++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << "Case " << q << ": ";
        for (int i = n - 2; i >= 0; i -= 2)
        {
            cout <<  arr[i] << " " << arr[i+1];
            if (i != 0) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
