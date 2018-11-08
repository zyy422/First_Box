#include <stdio.h>
#include <string>
#include <vector>
using std::vector;
using std::string;
int main()
{
	vector<string> mystr;
	for (int i = 0; i < 10; i++)
	{
		mystr.push_back("hello");
		std::cout << mystr[i] << std::endl;
	}
	
	system("pause");

}
