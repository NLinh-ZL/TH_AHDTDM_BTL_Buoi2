#include <stdio.h>
#include<math.h>

int ktraCP(int x) {
    int s = (int)sqrt(x);
    return s * s == x;
}

void demCP(int n) {
    int count = 0;
    printf("Các số chính phương nhỏ hơn %d: ", n);
    for (int i = 1; i < n; i++) {
        if (ktraCP(i)==1) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTổng số chính phương nhỏ hơn %d: %d\n", n, count);
}

int main(void){
    // Your code here!
    int n;
    scanf("%d",&n);
    while (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương: ");
        scanf("%d", &n);
    }
    demCP(n);
    return 0;
}
