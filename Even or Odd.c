#include <stdio.h>
 main() {
    int num;
    printf("Enter any Number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    

}

