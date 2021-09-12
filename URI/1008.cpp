/*
* URI 1008 - Salary
* Solution by Pedro T Freidinger (github.com/pedroter7)
*/

#include <iostream>

double calc_salary(int worked_hours, double wage_per_hour);

int main() {
    
    int employee_n, worked_hours;
    double wage_per_hour, month_salary;

    std::cin >> employee_n >> worked_hours >> wage_per_hour;

    month_salary = calc_salary(worked_hours, wage_per_hour);

    std::cout << "NUMBER = " << employee_n << std::endl;
    
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(2);
    std::cout << "SALARY = U$ " << month_salary << std::endl;

    return 0;
}

double calc_salary(int worked_hours, double wage_per_hour) {
    return worked_hours*wage_per_hour;
}