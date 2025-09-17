#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	long long a;
	cin >> n;
	vector<long long> row(n);
	long long left = 1;
	long long right = 1;
	long long j;
	
	if (n%2 == 0) {
	    j = ((n+1)/2);
	} else {
	    j = ((n+1)/2-1);
	}
	
	cin >> row[j];
	for (long long i=2; i<=n; i++) {
	    if (n%2 == 0) {
    		if (i%2 == 0) {
    			cin >> row[j-left];
    			left++;
    		} else {
    			cin >> row[j+right];
    			right++;
    		}
	    } else {
	       if (i%2 == 0) {
    			cin >> row[j+left];
    			left++;
    		} else {
    			cin >> row[j-right];
    			right++;
    		}
	    }
	}
	for (long long i=0; i<n; i++) {
		cout << row[i] << " ";	
	}
}