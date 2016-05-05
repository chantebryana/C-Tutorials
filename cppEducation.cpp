//exploring i/o concepts in http://www.cplusplus.com/doc/tutorial/basic_io/ 

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string mystr;
	string secondstr;
	cout << "What's your name? ";
	getline (cin, mystr);
	cout << "Hello " << mystr << ".\n";
	cout << "What's your favorite team? ";
	getline (cin, secondstr);
	cout << mystr << ", I like " << secondstr << " too!\n";
	return 0;
}