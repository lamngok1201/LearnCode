#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,y,z;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    y=a+b+c+d;
    z=e+f+g+h;
    if(y>z)
        cout << "NAM";
    else if(y==z)
        cout << "Tie";
    else
        cout << "NGA";

    return 0;
}
