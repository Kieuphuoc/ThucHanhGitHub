#include <iostream>

using namespace std;

//Ham kiem tra nam nhuan

bool isNhuan(int y) {
    if (y % 100 == 0 && y % 4 == 0)
        return true;
    else
        return false;
}

// Hàm kiểm tra số nguyên tố
bool isPrime(int a) {
    if (a > 2) return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

// Hàm hiển thị menu
void showMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Kiem tra so nguyen to" << endl;
    cout << "2. Kiem tra nam nhuan" << endl;
    cout << "3. Thoat" << endl;
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
        case 2: {
            int num;
            cout << "Nhap mot nam: ";
            cin >> num;

            if (num <= 0) {
                cout << "Nhap nam hop le!" << endl;
            }
            else {
                if (isNhuan(num))
                    cout << num << " la nam nhuan" << endl;
                else
                    cout << num << " khong phai la nam nhuan" << endl;
            }
            break;
        }
        case 3:
            cout << "Thoat chuong trinh" << endl;
            break;
        default:
            cout << "Khong hop le! Vui long thu lai." << endl;
        }
    } while (choice != 3);

    return 0;
}
