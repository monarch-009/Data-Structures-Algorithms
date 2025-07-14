#include <bits/stdc++.h>
using namespace std;

// Function to print the array
void printArray(int *&arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to reverse the array in place by swapping elements
// void reverseArray(int *&arr, int &n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// Function to reverse the array in place by temporarily storing elements
void reverseArray(int *&arr, int &n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int *arr = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    cout << "Original Array : ";
    printArray(arr, n);

    // Reverse the array
    reverseArray(arr, n);
    cout << "Reverse Array : ";
    printArray(arr, n);
}