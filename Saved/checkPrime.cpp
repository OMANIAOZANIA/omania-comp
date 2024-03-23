#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, prime = 0;
	cin >> n;
	
	int inputs[n];
	
	for (int i = 0; i < n; i++) { // INPUT
		cin >> inputs[i];
	}
	
	for (int i = 0; i < n; i++) { // CHECK EVERY INPUT
		if (inputs[i] == 0 || inputs[i] == 1) {
			cout << "BUKAN" << endl;
			continue;
		}
		
		for (int j = 2; j * j <= inputs[i]; j++) { // CHECK PRIME
			if (inputs[i] % j == 0) {
				prime = 1;
				break;
			}
			else {
				prime = 0;
			}
		}
		
		if (prime == 1) {
			cout << "BUKAN" << endl;
		}
		else {
			cout << "YA" << endl;
		}
	}
}
