#include <stdio.h>

int main (){
    int N, j, k;
    printf("masukkan nilai n :");
    scanf("%d", &N);

    for (int i = 1; i < N; i++)
    {
            if (i%2 == 0 && i%3 == 0)
            {
                printf("biru\n");
            }
            else if (i% 3 == 0)
            {
                printf("merah\n");
            }
            else if (i% 2 == 0)
            {
                printf("kuning\n");
            }
            else if (i >= 10)
            {
                j = i%10;
                k = i/10;
                k = i + k;
                k = k/2;
                
                if (k == 0)
                {
                    printf("hijau");
                }
                
            }
            else
            {
                printf("%d\n", i);
            }
        }
    return 0;
    }
