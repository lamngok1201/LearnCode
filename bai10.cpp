#include <iostream>
using namespace std;

int main()
{
	int val1,val2,we1,we2,max;
	cin >> val1 >> val2 >> we1>> we2 >> max;

	if ((we1+we2)>max)
	{
		if (val1>val2)
		{
			cout << val1;
		}
		else cout << val2;
	}
	else
	{
		cout << val1+val2;
	}
}