#include <iostream>
#include <cmath>
using namespace std;
// Calculate pH from hydrogen ion concentration
double calculate_pH_from_H(double H_concentration) {
    return -log10(H_concentration);
}
// Calculate pH from hydroxide ion concentration
double calculate_pH_from_OH(double OH_concentration) {
    return 14.0 - (-log10(OH_concentration));
}
int main() {
    char ion_type;
    double concentration;
    cout << "Enter 'H' for hydrogen ion concentration or 'O' for hydroxide ion concentration: ";
    cin >> ion_type;
    if (ion_type == 'H' || ion_type == 'h') {
        cout << "Enter the concentration of hydrogen ions (H+): ";
        cin >> concentration;
        if (concentration <= 0) {
            cout << "Concentration must be greater than 0." << endl;
            return 1;
        }
        cout << "The pH of the solution is: " << calculate_pH_from_H(concentration) << endl;
    }
    else if (ion_type == 'O' || ion_type == 'o') {
        cout << "Enter the concentration of hydroxide ions (OH-): ";
        cin >> concentration;
        if (concentration <= 0) {
            cout << "Concentration must be greater than 0." << endl;
            return 1;
        }
        cout << "The pH of the solution is: " << calculate_pH_from_OH(concentration) << endl;
    }
    else {
        cout << "Invalid input. Please enter 'H' or 'O'." << endl;
        return 1;
    }
    return 0;
}
/*
For find the pH we must need the concentration of H+ or OH-;
If the Question is like that : 
    *calculate the pH of a solution of 0.030 M H2SO4, then:
     _the concentration will be C = 2 * 0.030;(H+)
     *calculate the pH of a solution of 0.030 M Ca(OH)2, then:
     _the concentration will be C = 0.030 * 2;(OH-)
*/