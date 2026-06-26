#include <stdio.h>
#include <cs50.h>
// Constant


float average(int length, int array[]);
int main(void)
{
    const int  N = get_int("N : ");
    int scores[N];
    for(int i = 0;i < N;i++)
    {
        scores[i] = get_int("Score : ");
    }
    // Print
    printf("Average : %f\n", average(N, scores));

}
float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i<length;i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
