#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n >= 2 && n % 2 == 0) {
        for(int i = 0;i < n;i=i+2) {
            printf("*+");
        }
    } else {
        printf("Wrong input");
    }
}
