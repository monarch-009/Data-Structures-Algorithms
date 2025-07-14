#include <bits/stdc++.h>
using namespace std;

// Function to perform linear search on an array
// Returns the index of the target element if found, otherwise returns -1
int linearSearch(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    // Perform linear search
    int index = linearSearch(arr, size, target);
    if (index != -1)
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << target << "not found." << endl;
    }
}