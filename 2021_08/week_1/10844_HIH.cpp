#include <iostream>
using namespace std;

typedef long long L;
L Result;
L DP[101][10];
#define Mod 1000000000


int main(void) {

	int n;

	cin >> n;
	for (int i = 1; i <= 9; i++) DP[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) DP[i][0] = DP[i - 1][j + 1] % Mod;
			else if (j == 9) DP[i][9] = DP[i - 1][j - 1] % Mod;
			else DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j + 1] % Mod;
			
		}
	}
	for (int k = 0; k <= 9; k++) Result += DP[n][k] % Mod;
	cout << Result % Mod << endl;
}