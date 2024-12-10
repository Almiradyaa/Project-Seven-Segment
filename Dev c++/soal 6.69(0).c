#include <stdio.h>

int main() {
    int rows = 11;
    int start_num, num_count;

    for(int i = 1; i <= rows; i++) {
        start_num = i;
        num_count = i;

        for(int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for(int j = 1; j <= num_count; j++) {
            printf("%d", start_num);
            start_num++;
            if(start_num > 9) start_num = 0;
        }

        start_num = i - 1;
        if(start_num < 0) start_num = 9;

        for(int j = 1; j < num_count; j++) {
            printf("%d", start_num);
            start_num--;
            if(start_num < 0) start_num = 9;
        }

        printf("\n");
    }
    return 0;
}

