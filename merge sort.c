#include<stdio.h> 

void merge(int a[], int low, int mid, int high); 
void mergesort(int a[], int low, int high);

int main() 
{ 
    int a[50], n, i; 
    printf("Enter no of elements: "); 
    scanf("%d", &n); 
    if (n > 50)
    {
        printf("Array overflow\n");
        return 0;
    }
    printf("Enter array elements: "); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
    mergesort(a, 0, n - 1); 
    printf("\nSorted array is: "); 
    for(i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    return 0; 
} 

void mergesort(int a[], int low, int high) 
{ 
    int mid; 
    if(low < high) 
    { 
        mid = (low + high) / 2; 
        mergesort(a, low, mid); // left recursion 
        mergesort(a, mid + 1, high); // right recursion 
        merge(a, low, mid, high); // merging of two sorted sub-arrays 
    } 
}

void merge(int a[], int low, int mid, int high) 
{ 
    int i, j, k, b[50]; 
    k = low; 
    i = low; 
    j = mid + 1; 
    while((i <= mid) && (j <= high)) 
    { 
        if(a[i] <= a[j]) 
        { 
            b[k] = a[i]; 
            i++;
        } 
        else
        {
            b[k] = a[j]; 
            j++;
        }
        k++; 
    } 
    while(i <= mid) 
    { 
        b[k] = a[i]; 
        i++;
        k++; 
    } 
    while(j <= high)
    { 
        b[k] = a[j]; 
        j++;
        k++; 
    } 

    for(k = low; k <= high; k++) 
    { 
        a[k] = b[k]; 
    } 
}

