#include <iostream>
#include <map>
using namespace std;

void generate_sales_report(map<string, double>& sales_data) {
    double total_sales = 0.0;

    for (const auto& entry : sales_data) {
        total_sales += entry.second;
    }

    cout << "Raport sprzedaży:\n";

    for (const auto& entry : sales_data) {
        double percentage = (entry.second / total_sales) * 100;
        cout << entry.first << ": " << entry.second << " zł (" << percentage << "%)\n";
    }

    cout << "\nCałkowita sprzedaż: " << total_sales << " zł" << endl;
}
