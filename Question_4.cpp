#include <iostream>
#include <algorithm>
using namespace std;
int findMinimum(int arr[], int n, int k)
{
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += arr[i];
        n = n - k;
    }
    return res;
}
int findMaximum(int arr[], int n, int k)
{
    int res = 0, index = 0;

    for (int i = n - 1; i >= index; i--)
    {
        res += arr[i];
        index += k;
    }
    return res;
}
int* candyStore(int arr[], int n, int k)
{
    int result[2];
    result[0] = findMinimum(arr, n, k);
    result[1] = findMaximum(arr, n, k);
    return result;
}
