
#include<iostream.h>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
	int len = str.length();
	int n = len;
	while(n--)
		cout << str[n];
}


int main(void)
{
	string s = "Shankar";

	reverse(s);
	return (0);
}
