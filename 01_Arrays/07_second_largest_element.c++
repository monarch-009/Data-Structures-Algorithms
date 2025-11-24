#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int max = arr[0];
    // for (int i = 0; i < 10; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // cout << "Largest: " << max << endl;

    // int secondMax = -1;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (secondMax < arr[i] && arr[i] != max)
    //     {
    //         secondMax = arr[i];
    //     }
    // }
    // cout << "Second Largest: " << secondMax << endl;

    // Optimal
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << secondLargest << endl;
    return 0;
}