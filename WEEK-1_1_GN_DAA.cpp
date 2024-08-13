#include <stdio.h>
#include <stdlib.h>

void sort_ascending(int times[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (times[i] > times[j]) {
                temp = times[i];
                times[i] = times[j];
                times[j] = temp;
            }
        }
    }
}

void sort_descending(int times[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (times[i] < times[j]) {
                temp = times[i];
                times[i] = times[j];
                times[j] = temp;
            }
        }
    }
}

void print_array(int times[], int n,int i) {
    for(i = 0; i < n; i++) {
        printf("%d\n", times[i]);
    }
}

int main() {
    int n, i;
    printf("Enter number of packages to deliver:\n");
    scanf("%d", &n);
    
    int times[n];
    printf("Enter time to reach destination:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }

 
    printf("TEST CASE 1 OUTPUT:\n");
    sort_ascending(times, n);
    print_array(times, n,i);

    printf("\nEnter time to reach destination:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }
    printf("TEST CASE 2 OUTPUT:\n");
    sort_descending(times, n);
    print_array(times, n,i);

    return 0;
}

