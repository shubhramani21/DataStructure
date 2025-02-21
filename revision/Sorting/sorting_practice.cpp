#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &arr){
    int n = arr.size();

    for(int i = n - 1; i >= 1; i++){// this for loop is just for passes

        bool isSwap = false;

        for(int j = 0; j <= i; j++){// this for loop is for swaping and putting the largest element on the extreme left 
            if(arr[j + 1] < arr[j]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            
        }
        if(!isSwap) break;
    }

    cout<<"Using Bubble Sort..."<<endl;
    cout<<"Array is now sorted"<<endl;
}

void insertionsort(vector<int> &arr){
    int n = arr.size();

    // in insertion sort we try to put the elements in their correct position by comparing them with previous elements
    // it is similar to finding the correct position of an element in an sorted array


    for(int i = 1; i <= n - 2; i++){// this for loop is used to iteratre each element till second last element since we try to put the last element in its correct position
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {

            // finding and putting the element in the correct position
            swap(arr[j - 1], arr[j]);
            j--;
        }
        
    }

    cout<<"Using Insertion Sort..."<<endl;
    cout<<"Array is now sorted"<<endl;
}



void selectionSort(vector<int> &arr){
    int n = arr.size();
    // here we find the minimum element and put it in the start of the array in each iteration
    for(int i = 0; i <= n - 2; i++){

        int min = i;

        for(int j = i; j <= n; j++){

            if(arr[min] > arr[j]) min = j;

        }

        swap(arr[min], arr[i]);
    }
}


int main(){

    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    return 0;
}
