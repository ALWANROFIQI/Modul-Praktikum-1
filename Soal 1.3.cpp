#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int i, n, data[50];
    float rata,jumlah;
    
    cout << "banyaknya data = ";
    cin >> n;
    cout << endl;
    
    for (i=0; i<n; i++)
        {
        	cout << "data" << "[" << i+1 << "]" << " = ";
        	cin >> data[i];
        	jumlah += data[i];
		}
		
	rata = jumlah/n;
	
	cout << endl;
	cout << "banyaknya data= " << n << endl;
	cout << "rata-rata = " << rata << endl;
	cout << "jumlah = " << jumlah << endl;
	
	double sigma = sigma+sqrt(data[50]-rata);
	double sd = sqrt(sigma/n);
	cout <<"sigma = " << sd;
	
	getch();
}
