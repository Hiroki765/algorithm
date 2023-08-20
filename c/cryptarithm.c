#include <stdio.h>
//虫食算
//    xxxxxx
//   *  xxxx
//----------
//    66xxxx     a
//   6xxxxx      b
// xx666xx       c
// xx6xx6        d
//----------
//xxxx66xxxx     answer

int a, b, c, d, answer;

int main(void){
    for (int iterA = 100000; iterA < 1000000; iterA++){
        for(int iterB = 1000; iterB < 10000; iterB++){
            // iterBを桁ごとに分解する
            int iterB_1 = iterB % 10;
            int iterB_10 = iterB % 100 / 10;
            int iterB_100 = iterB % 1000 / 100;
            int iterB_1000 = iterB / 1000;
            a = iterA * iterB_1;
            if (a >= 660000 && a <= 669999){
                b = iterA * iterB_10; 
                if(b >= 600000 && b <= 699999){
                    c = iterA * iterB_100;
                    if(c >= 1066600 && c < 10000000){
                        if(c % 100000 / 10000 == 6 && c % 10000 / 1000 == 6 && c % 1000 / 100 == 6){
                            d = iterA * iterB_1000;
                            if(d % 10 == 6 && d % 10000 / 1000 == 6){
                                printf("iterA:%d, iterB:%d\n", iterA, iterB);  
                                answer = iterA * iterB;
                                if(answer >= 1000000000 && answer % 1000000 / 100000 == 6 && answer % 100000 / 10000 == 6){
                                    printf("==> iterA:%d, iterB:%d, answer: %d \n", iterA, iterB, answer);                                    
                                };
                            };
                        };
                    };
                };
            };
        };
    };
    return 0;
};