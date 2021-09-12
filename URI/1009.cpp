/*
* URI 1009 - Salary with Bonus
* Solution by Pedro T Freidinger (github.com/pedroter7)
*/

#include <iostream>
#include <string>

double calc_salary(double, double, float);

int main() {
    
    std::string employee_name;
    double base_salary, total_sales, salary;

    std::cin >> employee_name >> base_salary >> total_sales;

    salary = calc_salary(base_salary, total_sales, 15);

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(2);

    std::cout << "TOTAL = R$ " << salary << std::endl;

    return 0;
}

double calc_salary(double base_salary, double total_sales, float bonus_percent) {
    return base_salary + total_sales*(bonus_percent/100);
}