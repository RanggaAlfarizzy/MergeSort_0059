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

    cout << "\n------------------------------" << endl;
    cout << "Inputkan Isi elemen array" << endl;
    cout << "\n------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// create function mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);      // step 3.a
    mergeSort(mid + 1, high); // step 3.b

    // step 4
    int i = low;     // step 4.a
    int j = mid + 1; // step 4.b
    int k = low;     // step 4.c
}