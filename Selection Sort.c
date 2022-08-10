#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selsort(int [], int);

int a[15000], n;

void main(){
    int i, j, ch,temp;
    clock_t start, end;
    while(1){
        printf("\n1. Manual Entry\n2. Automatic Entry\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("\nEnter the number of elements: ");
                    scanf("%d", &n);
                    printf("\nEnter the elements: ");
                    for(i = 0; i<n; i++){
                        scanf("%d", &a[i]);
                    }
                    start = clock();
                    selsort(a,n);
                    for(j = 0; j<500000000; j++){
                        temp = 38/600;
                    }
                    end = clock();
                    printf("\nThe sorted array: ");
                    for(i = 0; i<n; i++){
                        printf("%d\t", a[i]);
                    }
                    printf("\nTime for n = %d is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
                    break;
            case 2: n = 500;
                    while(n<=14500){
                        for(i = 0; i<n; i++){
                            a[i] = n-i;
                        }
                        start = clock();
                        selsort(a,n);
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

void selsort(int a[], int n){
    int i, j, small, pos, temp;
    for(i = 0; i<n-1; i++){
        small = a[i];
        pos = i;
        for(j = i+1; j<n; j++){
            if(a[j]<small){
                small = a[j];
                pos = j;
            }
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}


