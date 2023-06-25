#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int mid, int h)
{
    int i, j, k;
int arr2[100];
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        arr2[k] = arr[i];
        i++;
        k++;
    }
    while (j <= h)
    {
        arr2[k] = arr[j];
        j++;
        k++;
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = arr2[i];
    }
}
void Imerge(int arr[], int n)
{
    int p, i, l, mid, h;
    for (p = 2; p <= n; p = p * 2)
    {
        for ( i = 0; i + p - 1 < n; i = i + p)
        {
            l=i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(arr, l, mid, h);
        }
    }
    if (p / 2 < n)
    {
        merge(arr, 0, p / 2 - 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Imerge(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}