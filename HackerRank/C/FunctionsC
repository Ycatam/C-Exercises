#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d){
    int max = 0;
    
    if(max >=a && max >=b && max >=c && max >=d)
        max = max;
    else if(a >= max && a >= b && a >= c && a >=d){
        max = a;
    }
    else if (b >= max && b >= a && b >= c && b >= d) {
        max = b;
    }
    else if (c >= max && c >=a && c >= b && c >= d) {
        max = c;
    }
    else {
        max = d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
