// #include <stdio.h>

// int is_prime(int num) {
//     if (num <= 1) {
//         return 0;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int start, end;

//     printf("Enter the start of the range: ");
//     scanf("%d", &start);
//     printf("Enter the end of the range: ");
//     scanf("%d", &end);

//     printf("Prime numbers in the range [%d, %d] are:\n", start, end);
//     for (int i = start; i <= end; i++) {
//         if (is_prime(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }







#include<stdio.h>

void prime(int m,int n) {
    int c=0;
    for(int i=m;i<n;i++)
    {
        if(i==1)
        {
            continue;
        }
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    c=0;
}
}

int main()
{
    int m,n;
    printf("Enter the range : ");
    scanf("%d %d",&m,&n);
    prime(m,n);
}
