#include <cs50.h>
#include <stdio.h>

// Input N value


float average(int length,int array[]);

int main(void)
{
    const int N = get_int("How many scores : ");
    int scores[N];
    for(int i = 0; i < N;i++)
    {
        scores[i] = get_int("Scores  : ");
    }
    printf("Average :%f\n", average(N, scores));
}
float average(int length,int array[])
{
    int sum = 0;
    for(int i = 0; i < length ; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
