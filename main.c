#include "stdio.h"
#include "stdlib.h"

int search(int *m, int *ary, int left, int right){
    int middle = left+(right-left)/2;
    
    if (left>middle || right<middle) return 0;
    
    if (*m > ary[middle]) return search(m, ary, middle+1, right);
    if (*m < ary[middle])return search(m, ary, left, middle-1);
    
    return middle+1;
}

int main(){
    int n, k, *ary, i, m;
    while (scanf("%d%d", &n, &k) != EOF) {
        ary = malloc(n*sizeof(int));
        for (i=0; i<n; i++)
            scanf("%d", ary+i);
        
        for (i=0; i<k; i++){
            scanf("%d", &m);
            printf("%d\n", search(&m, ary, 0, n-1));
        }
        free(ary);
    }
    return 0;
}
