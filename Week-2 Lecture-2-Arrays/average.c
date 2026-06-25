#include <cs50.h>
#include <stdio.h>

float average(int Length, int Numbers[]);
int main(void){
    int N = 3;
    int scores[N];
    for(int i = 0 ;i<N;i++){
        scores[i] = get_int("Score: ");
    }

    printf("Average : %f\n", average(N,scores));
}
float average(int Length, int Numbers[]){
    int sum = 0;
    for(int i = 0;i<Length;i++){
        sum += Numbers[i];
    }
    return sum/ (float) Length;
}
