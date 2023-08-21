#include <stdio.h>
#include <math.h>

// ２点（x1, y1）  （x2, y2）との距離を求める関数
double calc_dist(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); 
};

int main(void){
    double minimum_dist;
    //Get input number
    int N;
    scanf("%d", &N);

    //Get x, y position
    double x[N], y[N];
    for (int i = 0; i < N; i++){
        scanf("%lf%lf", &x[i], &y[i]);
    };
    // initialization minimum_dist
    minimum_dist = 100000000.0;

    // Start exploring
    for (int i = 0; i < N; i++){
        for(int j = i +1; j < N; j++){
            double dist_i_j = calc_dist(x[i], y[i], x[j], y[j]);

            if(dist_i_j < minimum_dist){
                minimum_dist = dist_i_j;
            };
        };
    };

    printf("%lf", minimum_dist);
    return 0;
};