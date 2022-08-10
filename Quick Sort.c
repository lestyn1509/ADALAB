#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int partition(int a[], int, int);
void quickSort(int arr[], int, int);

int a[15000], n;

void main(){
    int i, j, ch, temp;
    clock_t start, end;
    while(1){
        printf("\n1.Manual Entry\n2. Automatic Entry\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("\nEnter the number of elements: ");
                    scanf("%d", &n);
                    printf("\nEnter the array elements: ");
                    for(i = 0; i<n; i++){
                        scanf("%d", &a[i]);
                    }
                    start = clock();
                    quickSort(a,0, n-1);
                    for(j = 0; j<500000000; j++){
                        temp = 38/600;
                    }
                    end = clock();
                    printf("\nSorted Array: ");
                    for(i = 0; i<n; i++){
                        printf("%d\t", a[i]);
                    }
                    printf("\nTime taken to sort = %f", (((double)(end-start))/CLOCKS_PER_SEC));
                    break;
            case 2: n = 500;
                    while(n<=15000){
                        for(i = 0; i<n; i++){
                            a[i] = n-i;
                        }
                        start = clock();
                        quickSort(a, 0, n-1);
                        for(j = 0; j<500000000; j++){
                            temp = 38/600;
                        }
                        end = clock();
                        printf("\nTime taken for n = %d is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
                        n = n+1000;

                    }
                    break;
            case 3: exit(0);
        }
        getchar();
    }
}

int partition(int a[], int low, int high){
    int key, i, j, temp;
    key = a[low];
    i = low+1;
    j = high;
    while(1){
        while(i<high && key>a[i]){
            i++;
        }
        while(key<a[j]){
            j--;
        }
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else{
            temp = a[low];
            a[low] = a[j];
            a[j] = temp;
            return j;
        }
    }
}

void quickSort(int a[], int low, int high){
    int j;
    if(low<high){
        j = partition(a, low, high);
        quickSort(a, low, j-1);
        quickSort(a, j+1, high);
    }
}

