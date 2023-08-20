#include <stdio.h>
//虫食算
int main(void){
    int a, b, c, d,  answer;
    for (int iterA = 0;iterA <= 9; iterA++){
        a = 20 + iterA;
        // printf("a:%d \n", a);
        for(int iterB = 10; iterB <= 99; iterB++){
            b = iterB;
            c = b % 10; // bの１の位
            d = a * c;  // 100以上で、10の位が3だとわかっている
            if(d >= 100){
                if(d % 100 / 10 == 3){ // 10の位が3
                    answer = a * b;
                    // printf("a:%d, b:%d, answer:%d \n", a, b, answer);
                    if(answer % 100 / 10 == 4 && answer < 1000){ //10の位が4
                        printf("a:%d, b:%d, answer:%d", a, b, answer);
                    };
                };
            };
        };
    };
    // printf("hello");
    return 0;
}