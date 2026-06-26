#include <cs50.h>
#include <stdio.h>

int main(void)

{
    const int N = 3;
    int Scores[N];
    for(int i = 0; i < N;i++)
    {
        Scores[i] = get_int("Score : ");

    }
    // Print Average
    printf("%f\n", (Scores[0] + Scores[1] + Scores[2]) / (float) N);
}
