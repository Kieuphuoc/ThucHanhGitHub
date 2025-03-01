#include <iostream>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm hiển thị menu
void showMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Kiem tra so nguyen to" << endl;
    cout << "2. Thoat" << endl;
    cout << "Chon chuc nang: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int num;
            cout << "Nhap mot so nguyen duong: ";
            cin >> num;

            if (num <= 0) {
                cout << "Vui long nhap mot so nguyen duong!" << endl;
            }
            else {
                if (isPrime(num))
                    cout << num << " la so nguyen to." << endl;
                else
                    cout << num << " khong phai la so nguyen to." << endl;
            }
            break;
        }
        case 2:
            cout << "Thoat chuong trinh" << endl;
            break;
        default:
            cout << "Khong hop le! Vui long thu lai." << endl;
        }
    } while (choice != 2);

    return 0;
}
