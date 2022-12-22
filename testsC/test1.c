#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("test.txt", "r");    
    if(fp == NULL)
    {
        perror("Unable to open file!");
        exit(1);
    }
    
    char * chunk = (char*)malloc(100 * sizeof(char));
    
    while(fgets(chunk, sizeof(chunk), fp) != NULL) {
        fputs(chunk, stdout);
    }
    fputs("\n", stdout);
    
    fclose(fp);
}