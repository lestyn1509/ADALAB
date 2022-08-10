#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void towerOfHanoi(int n, char from, char aux, char to){
    if(n == 1){
        printf("\nMove disk from %c to %c", from, to);
    }
    else{
        towerOfHanoi(n-1, from, to, aux);
        printf("\nMove disk from %c to %c", from, to);
        towerOfHanoi(n-1, aux, from, to);
    }
}

void main(){
    int n;
    int moves;
    printf("\nEnter the nuber of disks: ");
    scanf("%d", &n);
    moves = pow(2,n)-1;
    printf("\nThe total number of moves = %d", moves);
    towerOfHanoi(n, 'A', 'B', 'C');
    getchar();
}
