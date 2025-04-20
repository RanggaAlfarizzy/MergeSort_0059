#include <iostream>
using namespace std;

int arr[20], B[20]; // Array Utama dan Array bantu
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;
        if (n <= 20)
            break;
        cout << "\nMaksimal panjang array adalah 20" << endl;
    }
}