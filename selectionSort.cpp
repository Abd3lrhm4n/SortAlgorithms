#include<iostream>

using namespace std;
// # define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

void SelectionSort (int arr[], int size) {

    for (int i = 0; i < size; i++)
    {
        // hold arr[i] value
        int e = arr[i];

        // hold position of smallest element in array
        int temp = 0;

        for (int j = i; j < size; j++) {

            // check if the value of e larger than current arr[j]
            if (e > arr[j]) {

                // change the value of e to smaller
                e = arr[j];

                // save the position of the smaller
                temp = j; 
            }

            // if loop over and e value not equal the current arr[i] value
            if (j == size - 1 && e != arr[i]) {

                // swap 
                arr[temp] = arr[i];
                arr[i] = e;
            }
        }

    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    
    
}


int main () {

    int arr[] = {1, 9, 3, 7, 2, 5};

    SelectionSort(arr, 6);
    return 0;
}