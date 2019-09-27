#include <iostream>

int Partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int pIndex = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            // swap
            std::swap(arr[i], arr[pIndex]);
            pIndex++;
        }
        
    }

    std::swap(arr[pIndex], arr[end]);
    return pIndex; 

}

void QuickSort(int *arr, int start, int end)
{
    if (start < end)
    {
        int PartitionIndex = Partition(arr, start, end);
        QuickSort(arr, start, PartitionIndex - 1);
        QuickSort(arr, PartitionIndex + 1, end);
    }
    
}

int main() {
    
    int arr[] = {7, 8, 10, 20, 15, 1, 2, 5, 6}; 

    QuickSort(arr, 0, 8);

    for (int i = 0; i < 9; i++)
    {
        std::cout << arr[i] << ','; 
    }

    std::cout << '\n'; 
    

    return 0;
}