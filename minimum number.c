#include <stdio.h>
int min(int x, int y){
    if(x < y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int a = 5, b = 8, c = 2, d = 3;
    int left_min = min(a, b);
    int right_min = min(c, d);
    int final_min = min(left_min, right_min);
    printf("Minimum number is: %d", final_min);
}