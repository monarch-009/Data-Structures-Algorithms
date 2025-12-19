#include <bits/stdc++.h>
using namespace std;

// Brute Force

// void leftRoatedByD(vector<int> &arr, int d)
// {
//     int n = arr.size();
//     d = d % n;

//     vector<int> temp;
//     int j = 0;

//     for (int i = 0; i < d; i++)
//     {
//         temp.push_back(arr[i]);
//     }

//     for (int i = d; i < n; i++)
//     {
//         arr[i - d] = arr[i];
//     }

//     for (int i = n - d; i < n; i++)
//     {
//         arr[i] = temp[j];
//         j++;
//     }
// }

// Optimal Solution
void leftRoatedByD(vector<int> &arr, int d)
{
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    leftRoatedByD(arr, 4);
    printArray(arr);
    return 0;
}