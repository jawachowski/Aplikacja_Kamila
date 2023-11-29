#include <iostream>

double calculate_salary(double sales_amount, double advance_amount) {
    double bonus = calculate_bonus(sales_amount);
    double total_salary = sales_amount * (1 + bonus) - advance_amount;

    if (total_salary < 0) {
        std::cout << "Pracownik musi zwrócić firmie pieniądze." << std::endl;
    }

    return std::max(total_salary, 0.0);
}
