// La fonction 1: 

void swap_int(int *a, int *b)
{
     // swap two elements
    int c = a
    a = b
    b = c
}

// La fonction 2:

bool is_sorted_nondecreasing(int *arr, int n)
{
    // check if array is sorted, if yes return true
    // if not return false
    for (i=1 to i=n);
    if arr[i]<= arr[i+1];
    return true
    else
    return false
}

// La fonction 3:

void copy_array(int *src, int *dst, int n)
{
    for (i=1 to i=n);
    dst[i] = src[i]
    
    // copy array elements src into dst

}


// Selection 
void selection_sort(int *arr, int n)
{
    for (i=0 to i=n-2);
    min=i
    for (j=1 to j=n-1);
    if arr[j]<arr[min];
    swap_int(arr[j],arr[min])
    return arr
    // selection sort iterative
}

// Insertion
void insertion_sort(int *arr, int n)
{
    for (i=0 to i=n-1);
    while arr[i]>arr[i+1];
    swap_int(arr[i],arr[i+1])
    return arr
    

    // insertion sort iterative
}


// Bubble sort
void bubble_sort(int *arr, int n)
{

    for (i=0 to i=n);
    if arr[i]>arr[i+1]


    // bubble sort iterative
}





// Merge sort
void merge_sort(int *arr, int n);




// Quick sort
void quick_sort(int *arr, int n);
if n<=1;
return A
mid = n/2
L = [0:mid-1]
R = [mid:n-1]
return Merge(L,R)

#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int l, int m, int r) {
    int i = l, j = m + 1, k = 0, *tmp = malloc((r - l + 1) * sizeof(int));
    while (i <= m && j <= r) tmp[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
    while (i <= m) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (i = 0; i < k; i++) a[l + i] = tmp[i];
    free(tmp);
}

void msort(int *a, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        msort(a, l, m);
        msort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

void merge_sort(int *arr, int n) { msort(arr, 0, n - 1); }

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10}, n = 7;
    merge_sort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}





#include <stdio.h>

void bubble_sort(int *a, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10}, n = 7;
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;

}
