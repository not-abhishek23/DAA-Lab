#include <iostream>
#include <algorithm>
using namespace std;
bool two_sum(int[], int, int, int);
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
        sort(array, array + size);
        int key;
        cin >> key;
        bool pair_exist = two_sum(array, 0, size - 1, key);
        if (!pair_exist)
            cout << "No such pair exist."
                 << "\n";
        t--;
    }
}
bool two_sum(int array[], int left, int right, int key)
{
    bool flag = false;
    while (left <= right)
    {
        int temp_sum = array[left] + array[right];
        if (temp_sum == key)
        {
            flag = true;
            cout << "(" << array[left] << "," << array[right] << ")";
            if (array[left] == array[left + 1] && array[right] != array[right - 1])
                left++;
            else if (array[left] != array[left + 1] && array[right] == array[right - 1])
                right--;
            else
            {
                left++;
                right--;
            }
        }
        else if (temp_sum > key)
            right--;
        else
            left++;
    }
    return flag;
}