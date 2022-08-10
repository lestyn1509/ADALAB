#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bin_search(int [], int, int, int);
int lin_search(int [], int, int, int);

int a[10000];
int n;

int main(){
    int ch, key, search_status;
    unsigned long i, j;
    clock_t start, end;
    while(1){
        printf("\n1. Binary Search\n2. Linear Search");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: n = 1000;
                    while(n<=5000){
                        for(int i = 0; i<n; i++){
                            a[i] = i;
                        }
                        key = a[n-1];
                        start = clock();
                        search_status = bin_search(a,0,n-1,key);
                        if(search_status == -1){
                            printf("\nKey not found");
                        }
                        else{
                            printf("\nKey found at %d",search_status);
                        }
                        for(j = 0; j<500000000; j++){
                            int temp = 38/600;
                        }
                        end = clock();
                        printf("\nTime for n = %d is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
                        n = n+1000;
                    }
                    break;
            case 2: n = 1000;
                    while(n<=5000){
                        for(int i = 0; i<n; i++){
                            a[i] = i;
                        }
                        key = a[n-1];
                        start = clock();
                        search_status = bin_search(a,0,n-1,key);
                        if(search_status == -1){
                            printf("\nKey not found");
                        }
                        else{
                            printf("\nKey fund at %d", search_status);
                        }
                        for(j = 0; j<500000000; j++){
                            int temp = 38/600;
                        }
                        end = clock();
                        printf("\nTime for n = %d is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
                        n = n+1000;
                    }
                    break;
            default: exit(0);
        }
        getchar();
    }
}

int bin_search(int a[], int low, int high, int key){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(key == a[mid]){
        return mid;
    }
    else if(key>a[mid]){
        return bin_search(a,mid+1,high,key);
    }
    else{
        bin_search(a,low, mid-1, key);
    }
}

int lin_search(int a[], int i, int high, int key){
    if(i>high){
        return -1;
    }
    if(key == a[i]){
        return i;
    }
    else{
        return lin_search(a,i+1, high, key);
    }
}
