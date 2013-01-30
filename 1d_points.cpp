#include <iostream>

using namespace std;

int main() {
	int n=4;
	int i;
	double *temp;
	double t2;
	double *tt;

	temp=new double[n];
	for(i=0;i<n;i++) {
			temp[i]=3.0/(double)(i+1);
	} 
	cout << "Print values of temp[i]" << endl;
	for(i=0;i<n;i++) {
			cout << "temp[" << i << "]= " <<  temp[i] << endl;
	}
	cout << "Print out value of *(temp+i)" << endl;
	for(i=0;i<n;i++) {
			cout << "*(temp+" << i << ")= " <<  *(temp+i) << endl;
	}
	cout << "We see that *(temp+i) and temp[i] produce the same result" << endl;
	cout << "Print out address of temp pointer: &temp=" << &temp << endl;
	cout << "Print out address of temp" << endl;
	for(i=0;i<n;i++) {
			cout << "temp+" << i << "= " <<  temp+i << endl;
	}
	cout << "Print out address of &temp[i]" << endl;
	for(i=0;i<n;i++) {
			cout << "&temp[" << i << "]= " <<  &temp[i] << endl;
	}
	
	t2=*(temp+2);
  cout << "Setting new variable t2 to value of temp[2] or *(temp+2)" << endl;
	cout << "t2=" << t2<< endl;

	cout << "We can also define pointers to pointers." << endl;
	cout << "Here tt is a pointer to the fourth element of temp" << endl;
	tt=&temp[3];
	cout << tt << "," << *tt << endl;
	cout << "We can also change the value of temp[3] by changing *tt." << endl;
	*tt = 89.9;
	cout << "The value of temp[3] is now: " << temp[3] << endl;
	double somevar=11.23;

	cout << &tt << endl;
	cout << &tt+1 << endl;
	cout << &somevar << endl;
	cout << "What happens if we increase the pointer value tt by 1?" << endl;
	for(int j=0;j<10;j++) { 
	tt++;
	cout << tt << "," << *tt << endl;
	}
	cout << "Be careful with this." << endl;
	return 0;



}
