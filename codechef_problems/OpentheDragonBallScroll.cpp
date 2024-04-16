// problem link
// https://www.codechef.com/problems/DRAGNXOR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, a, b;
	    cin >> n >> a >> b;

	    int c = 0;

	    while(a > 0){
	        if((a & 1) != 0){
	            c++;
	        }
	        a >>= 1;
	    }

	    while(b > 0){
	        if((b & 1) != 0){
	            c++;
	        }
	        b >>= 1;
	    }

	    long long int res = 0;

	    if(c > n){
	        c -= n;
	        res = (1 << n)-1;
	        for(int i = 1;i <= c;i++){
	            res -= (1 << (i-1));
	        }

	    }else{
	        for(int i = 0;i < c;i++){
	            res += (1 << (n-1-i));
	        }
	    }

	    cout << res << endl;
	}
	return 0;
}
