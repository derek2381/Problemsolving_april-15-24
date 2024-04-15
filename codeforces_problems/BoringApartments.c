// problem link
// https://codeforces.com/problemset/problem/1433/A



#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,total = 0, c = 0, digit;
        cin >> n;
        int arr[] = {0, 1, 3, 6, 10};
        digit = n % 10;
        digit--;

        while(n > 0){
            n /= 10;
            c++;
        }

        total += arr[c];
        total += (digit * 10);

        cout << total << endl;


    }
}
