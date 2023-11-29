#include <iostream>
using namespace std;

double calculate_salary(double sales_amount, double advance_amount) {
    double bonus = calculate_bonus(sales_amount);
    double total_salary = sales_amount * (1 + bonus) - advance_amount;

    if (total_salary < 0) {
        cout << "Pracownik musi zwrócić firmie pieniądze." << endl;
    }

    return max(total_salary, 0.0);
}
