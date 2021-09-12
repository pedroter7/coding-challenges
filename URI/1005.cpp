/*
* URI 1005 - Average 1
* Solution by Pedro T Freidinger (github.com/pedroter7)
*/

#include <iostream>

int main() {
    
    double a,b,media;

    std::cin >> a >> b;

    media = (a*3.5 + b*7.5)/(3.5+7.5);

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(5);

    std::cout << "MEDIA = " << media << std::endl;

    return 0;
}