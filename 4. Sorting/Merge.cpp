#include<bits/stdc++.h>
using namespace std;

void Merge(int A[], int l, int mid, int h) {
    int i = l, j = mid + 1;
    int k = l, B[h + 1];

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }

    while (j <= h) {
        B[k++] = A[j++];
    }

    while (i <= mid) {
        B[k++] = A[i++];
    }

    for (int a = l; a <= h; a++) {
        A[a] = B[a];
    }
}

void MergeSort(int arr[], int l, int h) {
    if (l < h) {
        int mid = l + (h - l) / 2;

        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, h);

        Merge(arr, l, mid, h);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[4] = {4, 3, 2, 1};

    cout << "Original array: ";
    display(arr, 4);

    MergeSort(arr, 0, 3);

    cout << "Sorted array: ";
    display(arr, 4);

    return 0;
}
