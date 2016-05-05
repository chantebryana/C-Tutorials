//exploring i/o concepts in http://www.cplusplus.com/doc/tutorial/basic_io/ 

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

int main ()
{
	string mystr;
	float price = 0;
	int quantity = 0;
	
	float t_s = 99.99f;
	double t_l = 99.99;
	printf("%.50f\n", t_s); //99.98999786376953125000000000000000000000000000000000
	printf("%.50f\n", t_l); //99.98999999999999488409230252727866172790527000000000
	
	cout << "Enter price: "; //99.99 
	getline (cin, mystr);
	stringstream(mystr) >> price;
	cout << "Enter quantity "; //6999
	getline (cin, mystr);
	stringstream(mystr) >> quantity;
	cout << "Total price: ";// << price*quantity << endl;
	printf("%.2f\n", ((double)price)*quantity); //I kept getting rounding errors that seemed mysterious.  Lines 17 & 18 help to show how the binary fucks up my floats.
	return 0;
}