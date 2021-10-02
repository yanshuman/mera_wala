// don't forget to use "long long int and double" for larger values
// look at intermediate calculation overflow

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int b, g;
	cin >> b >> g;
	if(g > b) {
		cout << "G";
		g--;
	}
	while((b+g) > 0) {
		if(b) {
			cout << "B";
			b--;
		} 
		if(g) {
			cout << "G";
			g--;
		} 
	}
	return 0;
}
