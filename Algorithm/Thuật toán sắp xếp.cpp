#include<bits/stdc++.h>
using namespace std;

// sắp xếp kiểu lựa chọn (Selection sort)
void selection()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                swap{a[i], a[j]};
            }
        }
    }
}
// sắp xếp kiểu thêm dần (insertion sort)
void insertion()
{
    for (int i = 2; i <= n; i++)
    {
        int t = a[i];
        int j = i - 1;
        for ( ; j >= 1 && a[j] > t; j--)
        {
            a[j+1] = a[j];
        }
        a[j + 1] = t;
    }
}
// sắp xếp nổi bọt (Bubble sort)
void bubble()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = n; j > i + 1; j--)
        {
            if (a[j] < a[j-1])
            {
                swap(a[j], a[j-1]);
            }
        }
    }
}
// quick sort
void qsort(int l, int r)
{
    int i = 1, jj = r, x = a[(l+r)/2];
    do
    {
        while(a[i] < x)
        {
            i++;
        }
        while(x < a[j])
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    while (i < j);
    if (l < j)
        qsort(l, j);
    if (i < r)
        qsort(i, r);
}
// Sắp xếp trộn (Merge sort)
int a[MAXN]; // mảng trung gian cho việc sắp xếp

// Sắp xếp các phần tử có chỉ số từ left đến right của mảng data.
void mergeSort(int data[MAXN], int left, int right)
{
    if (data.length == 1)
    {
        // Dãy chỉ gồm 1 phần tử, ta không cần sắp xếp.
        return ;
    }
    int mid = (left + right) / 2;
    // Sắp xếp 2 phần
    mergeSort(data, left, mid);
    mergeSort(data, mid+1, right);

    // Trộn 2 phần đã sắp xếp lại
    int i = left, j = mid + 1; // phần tử đang xét của mỗi nửa
    int cur = 0; // chỉ số trên mảng a

    while (i <= mid || j <= right)   // chừng nào còn 1 phần chưa hết phần tử.
    {
        if (i > mid)
        {
            // bên trái không còn phần tử nào
            a[cur++] = data[j++];
        }
        else if (j > right)
        {
            // bên phải không còn phần tử nào
            a[cur++] = data[i++];
        }
        else if (data[i] < data[j])
        {
            // phần tử bên trái nhỏ hơn
            a[cur++] = data[i++];
        }
        else
        {
            a[cur++] = data[j++];
        }
    }

    // copy mảng a về mảng data
    for (int i = 0; i < cur; i++)
        data[left + i] = a[i];
}
// sắp xếp vun đống (Heapsort)
void heap()
{
    Heap h = Heap();
    for (int i = 0; i < n; i++)
    {
        // thêm phần tử vào heap
        h.push(data[i]);
    }
    int a[MAXN];
    for (int i = 0; i < n; i++)
    {
        // lấy phần tử nhỏ nhất và cho vào mảng đã sắp xếp
        a[i] = h.pop();
    }
}
// shellsort
int shellSort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct
            // location for a[i] is found
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
}
