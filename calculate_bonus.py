#include <iostream>

double calculate_bonus(double sales_amount) {
    if (sales_amount <= 10000.00) {
        return sales_amount * 0.10;
    } else if (sales_amount <= 15000.00) {
        return sales_amount * 0.12;
    } else if (sales_amount <= 18000.00) {
        return sales_amount * 0.14;
    } else if (sales_amount <= 22000.00) {
        return sales_amount * 0.16;
    } else {
        return sales_amount * 0.18;
    }
}
