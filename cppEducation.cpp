//playing with strings and compound types (before I was using fundamental types)
/*this time () didn't work for defining mystring.  Here's what my console told me: 
Chauncy@DESKTOP-L5V77C9 ~/home/projects/C++ Tutorials
$ g++ cppEducation.cpp -o cppEducation
cppEducation.cpp: In function ‘int main()’:
cppEducation.cpp:11:48: error: no match for call to ‘(std::string {aka std::basic_string<char>}) (const char [35])’
  mystring ("This is a different string content");
*/
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string mystring;
	mystring = "This is the initial string content";
	cout << mystring << endl;
	mystring = "This is a different string content";
	cout << mystring << endl;
	return 0;
}