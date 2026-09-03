#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Berhenti awal jika sudah terurut
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> v1 = {64, 34, 25, 12, 22, 11, 90};
    
    vector<int> v_bubble = v1;
    bubbleSort(v_bubble);
    cout << "Bubble Sort   : ";
    for (int x : v_bubble) cout << x << " ";
    cout << "\n";

    vector<int> v_selection = v1;
    selectionSort(v_selection);
    cout << "Selection Sort: ";
    for (int x : v_selection) cout << x << " ";
    cout << "\n";

    vector<int> v_insertion = v1;
    insertionSort(v_insertion);
    cout << "Insertion Sort: ";
    for (int x : v_insertion) cout << x << " ";
    cout << "\n";

    return 0;
}