#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void insertionSort(int[], int);

int a[15000], n;

void main(){
    int i, j, ch, temp;
    clock_t start, end;
    while(1){
        printf("\n1. Manual Entry\n2. Automatic Entry\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("\nEnter the number of elements: ");
                    scanf("%d", &n);
                    printf("Enter the elements: ");
                    for(i = 0; i<n; i++){
                        scanf("%d", &a[i]);
                    }
                    start = clock();
                    insertionSort(a,n);
                    for(j = 0; j<500000000;j++){
                        temp = 38/600;
                    }
                    end = clock();
                    printf("\nSorted Array: ");
                    for(i = 0; i<n; i++){
                        printf("%d\t", a[i]);
                    }
                    printf("\nTime taken for n = %d is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
                    break;

            case 2: n = 500;
                    while(n<=15000){
                        for(i = 0; i<n; i++){
                            a[i] = n-i;
                        }
                        start = clock();
                        insertionSort(a, n);
                        for(j = 0; j<500000000; j++){
                            temp = 38/600;
                        }
                        end = clock();
                        printf("\nTime taken for n = %d is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
                        n = n+1000;
                    }
                    break;
        }
        getchar();
    }
}

void insertionSort(int a[], int n){
    int i, j, key;
    for(i = 1; i<n; i++){
        key = a[i];
        j = i-1;
        while(j>=0 && key<a[j]){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;

    }
}
