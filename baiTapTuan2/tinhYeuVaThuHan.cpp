/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
for
while
switch
?
;
###End banned keyword*/
#include <iostream>

using namespace std;


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    bool tre,dep,loved,giau;
    cin >> tre>>dep>>loved>>giau;

    cout <<

    ((tre==1 && dep==1 && loved==1)||(dep==0 && loved==1 && giau==loved))

        << endl;
    return 0;
}
