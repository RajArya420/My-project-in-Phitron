
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        char ar[10001];
        scanf("%s", ar);
        int small = 0, capital = 0, digit = 0;
        
        for (int i = 0; ar[i] != '\0'; i++) {
            if (ar[i] >= 'A' && ar[i] <= 'Z') {
                capital++;
            } else if (ar[i] >= 'a' && ar[i] <= 'z') {
                small++;
            } else if (ar[i] >= '0' && ar[i] <= '9') {
                digit++;
            }
        }
        
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}