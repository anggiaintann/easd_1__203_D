// 1. Beberapa algoritma dapat dirancang untuk memecahkan masalah tertentu. Algoritma yang memberikan efisiensi maksimum harus digunakan untuk memecahkan masalah. Efisiensi suatu algoritma dapat ditingkatkan dengan menggunakan struktur data yang sesuai.Struktur data membantu dalam membuat program yang sederhana, dapat digunakan kembali, dan mudah dipelihara.
// 2. Statis dan dinamis
// 3. kecepatan mesin, penyusun, sistem operasi, bahasa pemrograman, ukuran masukan, penggunaan struktur data, cara pengorganisasian data suatu program, algoritma yang digunakan
// 4. Dari 6 algoritma yang sudah dipelajari, menurut saya algoritma yang paling efisien untuk mengurutkan data yang ukurannya kecil adalah Insertion Sort.Alasan mengapa saya memilih Insertion Sort yaitu karena insertion sort lebih efisien untuk data yang ukurannya kecil adalah karena kompleksitas waktu terbaik dan rata - rata dari algoritma ini adalah O(n), yang artinya hanya membutuhkan waktu linier sebanding dengan jumlah elemen data. Pada saat membandingkan elemen - elemen data dan memasukkannya ke dalam urutan yang sudah terurut, algoritma Insertion Sort hanya memerlukan waktu yang sedikit untuk memindahkan elemen - elemen data ke tempat yang tepat dalam urutan.Hal ini karena pada setiap iterasi, Insertion Sort hanya memerlukan sedikit perbandingan dan pergeseran data untuk menempatkan satu elemen data ke dalam urutan yang tepat. Sedangkan pada algoritma sorting lainnya seperti Bubble Sort, Selection Sort, dan Shell Sort, meskipun juga dapat digunakan untuk mengurutkan data yang kecil, kompleksitas waktu terbaik dan rata - rata dari algoritma tersebut adalah O(n ^ 2), yang artinya membutuhkan waktu kuadratik sebanding dengan jumlah elemen data.
// 5. algoritma yang termasuk quadratic: bubble sort, insertion sort, selection sort. algoritma yang germasuk loglinear: shell sort, merge sort, quick sort


#include <iostream>
using namespace std;

const int MAX_DATA = 33; // 2 x 15 + 10 + 20


void input(int intan[], int n) {
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> intan[i];
    }
}


void selectionSort(int intan[], int n) {
    for (int AI = 0; AI < n - 1; AI++) {
        int min_index = AI;
        for (int i = AI + 1; i < n; i++) {
            if (intan[i] < intan[min_index]) {
                min_index = i;
            }
        }
        swap(intan[AI], intan[min_index]);
    }
}
void display(int intan[], int n) {
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {