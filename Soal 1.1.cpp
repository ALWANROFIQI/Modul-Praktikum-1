#include<iostream>
using namespace std;
int n[5];
int j, t, r;

int main(){
	for (int i=1; i<= 5; i++){
		cout << "Data " << i << ": ";
		cin >> n[i];
		t = t + n[i];
	}
	j = sizeof(n)/sizeof(n[0]);
	r = t / j;
	cout << "jumlah elem array: " << j << endl;
	cout << "total array: " << t << endl;
	cout << "rata rata array: " << r << endl;
}
