#include<iostream>
using namespace std;

int foo(int n) {
	if(n <= 1) {
		return 1;
	} else {
		return (n*foo(n-1));
	} 
}
int main() {
	int x;
	x = foo(5);
	cout << x<< endl;
	return 0;
}
