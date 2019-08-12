#include<iostream>

void MergeSort(int *a, int *l, int *r, int nl, int nr)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < nl && j < nr)
    {
        if (l[i] < r[j])
        {
            a[k] = l[i];
            k++;
            i++;
        }
        else
        {
            a[k] = r[j];
            k++;
            j++;
        }
        
    }
    while (i < nl)
    {
        a[k] = l[i];
        k++;
        i++;
    }
    while (j < nr)
    {
        a[k] = r[j];
        k++;
        j++;
    }
}

void Split(int a[], int size)
{
    if (size < 2) return;

    int mid = size / 2;
    int *L;
    int *R;
    L = new int[mid];
    R = new int[size - mid];

    for (int i = 0; i < mid; i++)
    {
        L[i] = a[i];
    }
    for (int i = mid; i < size; i++)
    {
        R[i - mid] = a[i];
    }

    Split(L, mid);
    Split(R, size - mid);
    MergeSort(a, L, R, mid, size - mid);
    delete L;
    delete R;
}

int main()
{
    int a[] = {2, 5, 7, 10, 6, 1, 3, 4, 9, 11};

    Split(a, 10);

    for (int i = 0; i < 10; i++)
    {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;


    return 0;
}