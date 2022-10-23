#include <iostream>
using namespace std;
int main() {
	int a, b, c, d,e,i;
	cin >> a >> b >> c;
	e = b - a;
	for (i = 0; i < c-1; i+=1)
	{
		a += e;
	}
	cout << a;

}
