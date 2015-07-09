#include <iostream>
#include <boost/algorithm/string.hpp>

using namespace boost;
using namespace std;

int main()
{
	
	string str1(" hello world from AppVeyor! ");
	to_upper(str1);
	trim(str1);
	cout << str1 << endl;
    return 0;
}