#include <iostream>

using namespace std;
int comparison = 0;

void merge_sort(int[], int[], int, int);
void merge(int[], int[], int, int, int);

int main()
{
    int t = 0;
    cin >> t;
    while (t != 0)
    {
        int size = 0;
        cin >> size;
        int array[size], temp[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        merge_sort(array, temp, 0, size - 1);
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << "\nComparisons = " << comparison << "\n";
        comparison = 0;
        t--;
    }
}

void merge_sort(int array[], int temp[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = lb + (ub - lb) / 2;
        merge_sort(array, temp, lb, mid);
        merge_sort(array, temp, mid + 1, ub);
        merge(array, temp, lb, mid, ub);
    }
}

void merge(int array[], int temp[], int lb, int mid, int ub)
{
    int k = lb, i = 0, c = lb, LE = mid;
    while (lb <= LE && mid + 1 <= ub)
    {
        if (array[lb] < array[mid + 1])
        {
            temp[k] = array[lb];
            lb++;
            k++;
        }
        else
        {
            temp[k] = array[mid + 1];
            k++;
            mid++;
        }
        comparison++;
    }

    while (lb <= LE)
    {
        temp[k] = array[lb];
        k++;
        lb++;
    }
    while (mid + 1 <= ub)
    {
        temp[k] = array[mid + 1];
        k++;
        mid++;
    }
    for (int i = c; i <= ub; i++)
    {
        array[i] = temp[i];
    }
}