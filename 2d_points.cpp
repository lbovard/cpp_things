#include <iostream>

using namespace std;

int main() {
	int i=0;
	double **temps;
	double *ptr;
	double some_number=3.2;
	temps=new double*[3];
	for(i=0;i<3;i++) {
		//*(temps+i)=new double[3];
		temps[i]=new double[3];
	}	
	temps[0][0]=1.0;
	temps[0][1]=2.0;
	temps[0][2]=3.0;
	cout << &temps[0] << endl;
	cout << &temps[1] << endl;
	cout << &temps[2] << endl;
	cout << temps[0] << endl;
	cout << temps[1] << endl;
	cout << temps[2] << endl;
	cout << *(temps[0]+0) << endl;
	cout << *(temps[0]+1) << endl;
	cout << *(temps[0]+2) << endl;
	ptr = temps[0];	
	cout << ptr << endl;
	cout << *(ptr+0) << endl;
	cout << *(ptr+1) << endl;
	cout << *(ptr+2) << endl;
	*(ptr+1)=45.3;
	cout << *(ptr+0) << endl;
	cout << *(ptr+1) << endl;
	cout << *(ptr+2) << endl;

	cout << some_number << endl;
	ptr=&some_number;
	*ptr=43.2;
	cout << some_number << endl;
	return 0;
}
