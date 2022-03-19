#include <iostream>
using namespace std;

int counter = 0;


void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
    cout << "New trab:" << *second << endl;
    counter++;
}


void bubbleSort(int arr[], int arr_size) {
    int i, j;
    for (i = 0; i < arr_size-1; i++) {
        for (j = 0; j < arr_size-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


int main() {
    int arr[100] = {};
    int arr_size;
    int input;

    cin >> arr_size;

    for(int i=0; i<arr_size; i++){
        cin >> input;
        arr[i] = input;
    }

    bubbleSort(arr, arr_size);

    cout << "Contador:" << counter << endl;
}
