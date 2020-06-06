#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a[2000], n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int t = 0, t2 = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
		if(a[i] % 2 == 0)
			t++;
		else
			t2++;
	}
	if (sum % 2 != 0 || sum == 1)
		cout << "YES";
	else{
		if (t != 0 && t2 != 0)
			cout << "YES";
		else
			cout << "NO";
	}
	cout << "\n";
}
int main(){
   	ios::sync_with_stdio(false);
   	cin.tie(0);
   	int t;
   	cin >> t;
   	while (t--)
   		decode();
    return 0;
}
