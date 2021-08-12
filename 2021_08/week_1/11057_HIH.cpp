#include <iostream>

#define DIV 10007
using namespace std;

typedef long long LL;
int DP[1001][10];

//Á¡È­½Ä: dp[i][j] += dp[i-1][k], K<=j


int Array_sum(int Array[], int size);

int main(void) {

	int n;
	int result = 0;
	cin >> n;

	
	for (int i = 0; i < 10; i++) {
		if (i == 0) DP[1][i] = 1;
		DP[1][i] = 1;
	}
	
	for (int i = 2; i <= n; i++) {
		for(int j=0;j<=9;j++)
			for (int k = 0; k <= j; k++) {
				DP[i][j] += DP[i - 1][k] % DIV;
			}
	}
	
	result = Array_sum(DP[n], 10) % DIV;
	
	
	cout << result << "\n";

	
}


int Array_sum(int Array[], int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += Array[i] % DIV;
	}
	return result;
}

