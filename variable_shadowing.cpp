/*
	Demonstrating variable shadowing
  Compile with g++ -Wshadow to get errors
*/

#include <iostream>
using namespace std;

int main() {
	int i=0;
	for(i=0;i<3;i++) {
		cout << i << endl;
	}
	cout << i << endl;
	cout << endl;
	for(int i=0;i<8;i++) {
		int i;
		cout << i << endl;
	}
	cout << i << endl;
	return 0;
}
