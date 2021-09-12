/*
* URI 1010 - Simple Calculate
* Solution by Pedro T Freidinger (github.com/pedroter7)
*/

#include <iostream>

struct product {
    int code;
    int qt;
    double price;
};

product* read_product();
double calc_total(product, product);

int main() {
    
    product *p_a, *p_b;
    double total;

    p_a = read_product();
    p_b = read_product();

    total = calc_total(*p_a, *p_b);

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(2);

    std::cout << "VALOR A PAGAR: R$ " << total << std::endl;

    delete p_a;
    delete p_b;

    return 0;
}

product* read_product() {
    product *p = new product;
    std::cin >> p->code >> p->qt >> p->price;
    return p;
}

double calc_total(product p_a, product p_b) {
    return p_a.price*p_a.qt + p_b.price*p_b.qt;
}