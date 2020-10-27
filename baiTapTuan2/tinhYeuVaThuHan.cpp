#include <iostream>
using namespace std;
int main()
{
    bool tre_trung, xinh_dep, giau_co, co_gau;
    cin >> tre_trung >> xinh_dep >> co_gau >> giau_co;
    cout <<(((tre_trung==xinh_dep)&&(xinh_dep==co_gau)&&(co_gau==1))
    ||((xinh_dep==0)&&(co_gau==1)&&(giau_co==1)));
    //(tre_trung==xinh_dep)&&(xinh_dep==co_gau)&&(co_gau==1)
    // xinh_dep==0 && co_gau==1 && giau_co==1
    return 0;
}
