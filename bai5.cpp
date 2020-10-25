#include <iostream>
using namespace std;

int main()
{
	int a1,a2,a3,b1,b2,b3,nam,nga;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

	nam=a1+a2+a3;
	nga=b1+b2+b3;

	if (nam>nga) 
	{
		cout << "Nam";
	}
	else 
	{
		if (nga>nam) 
			{ cout << "Nga";}
		else cout << "Tie";
	}
}