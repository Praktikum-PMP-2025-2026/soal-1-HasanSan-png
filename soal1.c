#include <stdio.h>

int main (){
    int N;
    printf("masukkan nilai n :");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
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
            else if (i >= 10 && i == i % 10 )
            {
                printf("hijau");
            }
            else
            {
                printf("%d\n", i);
            }
        }
    return 0;
    }
