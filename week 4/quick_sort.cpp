#include <iostream>

using namespace std;

int comparison = 0;
int total_swaps = 0;

int partition(int[], int, int);
void quick_sort(int[], int, int);
void swap(int &, int &);

int main()
{
    int t = 0;
    cin >> t;
    while (t != 0)
    {
        int size = 0;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        quick_sort(array, 0, size - 1);
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << "\nComparisons = " << comparison << "\n";
        cout << "Total Swaps = " << total_swaps << "\n";
        comparison = 0;
        total_swaps = 0;
        t--;
    }
}

void quick_sort(int array[], int lb, int ub)
{
    if (lb >= ub)
        return;
    int pi = partition(array, lb, ub);
    quick_sort(array, lb, pi - 1);
    quick_sort(array, pi + 1, ub);
}

int partition(int array[], int lb, int ub)
{
    int pivot = array[ub];
    int i = lb - 1;
    for (int j = lb; j < ub; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array[i], array[j]);
            total_swaps++;
        }
        comparison++;
    }
    swap(array[i + 1], array[ub]);
    total_swaps++;
    return i + 1;
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}