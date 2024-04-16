// problem link
// https://www.codechef.com/problems/AXNODR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int n,res;
	    cin >> n;

	    if(n % 4 == 0){
	        cout << n+3 << endl;
	    }else if(n % 4 == 2 || n%4 == 3){
	        cout << 3 << endl;
	    }else{
	        cout << n << endl;
	    }


	}
	return 0;
}
