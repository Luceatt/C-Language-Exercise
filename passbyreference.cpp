#include <iostream>

// Fungsi yang menerima parameter dengan pass by reference
void modifyValue(int &x) {
    x = x * 2;
}

int main() {
    int num = 5;

    std::cout << "Nilai sebelum pemanggilan fungsi: " << num << std::endl;
    
    modifyValue(num); // Mengirim parameter dengan pass by reference

    std::cout << "Nilai setelah pemanggilan fungsi: " << num << std::endl; // Nilai num berubah

    return 0;
}
