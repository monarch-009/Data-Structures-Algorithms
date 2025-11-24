#include <bits/stdc++.h>
using namespace std;

bool checkSortedArray(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
void PrintResult(bool a)
{
    if (a == 1)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
}

int main()
{
    int arr[10] = {1, 11, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[5] = {1, 6, 12, 24, 48};

    // Test Case
    bool a = checkSortedArray(arr, 10);
    bool b = checkSortedArray(arr2, 5);
    PrintResult(a);
    PrintResult(b);
}