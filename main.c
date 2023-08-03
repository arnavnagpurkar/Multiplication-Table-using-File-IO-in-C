#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("02_output.txt", "w");

    int table;
    printf("Enter the number: \n");
    scanf("%d", &table);

    fprintf(ptr, "Multiplication table of %d\n", table);
    for (int i = 0; i<10; i++){
        fprintf(ptr, "%d X %d = %d\n", table, i+1, table*(i+1));
    }

    printf("Multiplication table written in output.txt");
    fclose(ptr);
    return 0;
}