/*
* URI 1006 - Average 2
* Solution by Pedro T Freidinger (github.com/pedroter7)
*/

#include <iostream>

int main() {
    
    float a,b,c,avg;

    std::cin >> a >> b >> c;

    avg = (a*2+b*3+c*5)/10;

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(1);
    std::cout << "MEDIA = " << avg << std::endl;

    return 0;
}