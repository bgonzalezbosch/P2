#include <math.h>
#include "pav_analysis.h"
#include <stdio.h>
#include <float.h>

float compute_power(const float *x, unsigned int N) {
    float sum = 0;
    int i;
    for(i=0;i<N;i++){
        sum = sum+(x[i]*x[i]);
    } 
    float res = 10*log10((1.0/N)*sum);
    printf("%f\n",res);
    return res;
}

float compute_am(const float *x, unsigned int N) {
    float sum = 0;
    int i;
    for(i=0;i<N;i++){
        if(x[i]<0){
            sum = sum+(x[i]*(-1.0));
        }else{
            sum = sum+x[i];
        }
    }
    float res = (1.0/N)*sum;
    printf("%f\n",res);
    return res;
}

float compute_zcr(const float *x, unsigned int N, float fm) {
    int sum = 0;
    int i;
    for(i=1;i<N;i++){
        if((x[i-1]*x[i])<0){
            sum = sum+1;
        }
    }
    float res = (4000/(N-1))*sum;
    printf("%f\n", res);
    return res;
}
