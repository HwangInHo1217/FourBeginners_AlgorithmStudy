#include <iostream>

using namespace std;

int main(void) {
	int DP[11] = {};
	int n, x;
	
	cin >> n;
	while (n != 0) {

		cin >> x;
		DP[1] = 1; DP[2] = 2; DP[3] = 4;
		for (int i = 4; i <= x; i++) DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];

		cout << DP[x] << endl;
		n--;
	}

}