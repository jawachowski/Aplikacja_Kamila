#include <iostream>
#include <map>

void generate_sales_report(std::map<std::string, double>& sales_data) {
    double total_sales = 0.0;

    for (const auto& entry : sales_data) {
        total_sales += entry.second;
    }

    std::cout << "Raport sprzedaży:\n";

    for (const auto& entry : sales_data) {
        double percentage = (entry.second / total_sales) * 100;
        std::cout << entry.first << ": " << entry.second << " zł (" << percentage << "%)\n";
    }

    std::cout << "\nCałkowita sprzedaż: " << total_sales << " zł" << std::endl;
}
