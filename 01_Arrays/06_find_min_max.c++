#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum element in an array
int maxInArray(int *&arr, int n)
{
    if (n <= 0)
    {
        cout << "Array is empty." << endl;
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum element in an array
int minInArray(int *&arr, int &n)
{
    if (n <= 0)
    {
        cout << "Array is empty." << endl;
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int *arr = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Maximum Element: ";
    cout << maxInArray(arr, n) << endl;
    cout << "Minimum Element: ";
    cout << minInArray(arr, n) << endl;
    delete[] arr;
    return 0;
}