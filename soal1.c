#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
            if (i%2 == 0 && i%3 == 0)
            {
                printf("BIRU\n");
            }
            else if (i% 3 == 0)
            {
                printf("MERAH\n");
            }
            else if (i% 2 == 0)
            {
                printf("KUNING\n");
            }
            else if (i >= 10 && i == i % 10 )
            {
                printf("HIJAU");
            }
            else
            {
                printf("%d\n", i);
            }
        }
    return 0;
    }
