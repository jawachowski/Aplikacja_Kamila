#include <iostream>
#include <vector>

using namespace std;

// Klasa reprezentująca pracownika
class Pracownik {
public:
    int idPracownika;
    string imie;
    string nazwisko;
    double kwotaSprzedazy;
    double zaliczka;
};

// Funkcja do obliczania premii
double obliczPremie(double kwotaSprzedazy) {
    if (kwotaSprzedazy <= 10000.00) {
        return kwotaSprzedazy * 0.10;
    } else if (kwotaSprzedazy <= 15000.00) {
        return kwotaSprzedazy * 0.12;
    } else if (kwotaSprzedazy <= 18000.00) {
        return kwotaSprzedazy * 0.14;
    } else if (kwotaSprzedazy <= 22000.00) {
        return kwotaSprzedazy * 0.16;
    } else {
        return kwotaSprzedazy * 0.18;
    }
}

// Funkcja do obliczania wynagrodzenia
double obliczWynagrodzenie(double kwotaSprzedazy, double zaliczka) {
    double premia = obliczPremie(kwotaSprzedazy);
    double wynagrodzenie = kwotaSprzedazy * (1 + premia) - zaliczka;

    if (wynagrodzenie < 0) {
        cout << "Pracownik musi zwrócić firmie pieniądze." << endl;
    }

    return max(wynagrodzenie, 0.0);
}

// Funkcja do generowania raportu premii dla wszystkich pracowników
void generujRaportPremii(const vector<Pracownik>& pracownicy) {
    cout << "Raport premii pracowników:\n";

    for (const auto& pracownik : pracownicy) {
        double premia = obliczPremie(pracownik.kwotaSprzedazy);
        cout << "Pracownik: " << pracownik.imie << " " << pracownik.nazwisko
             << ", Premia: " << premia << " zł\n";
    }
}

int main() {
    // Przykładowa lista pracowników
    vector<Pracownik> pracownicy = {
        {1, "Jan", "Kowalski", 12000.0, 2000.0},
        {2, "Anna", "Nowak", 18000.0, 1500.0},
        // Dodaj więcej pracowników...
    };

    // Generuj raport premii
    generujRaportPremii(pracownicy);

    return 0;
}

