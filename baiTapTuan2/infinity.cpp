#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    if((b-a)%2==0 && a<b){
        std::cout <<"FALSE";
    }else {
        std:: cout <<"TRUE";
    }
    return 0;
}
