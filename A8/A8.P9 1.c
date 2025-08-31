/*
    CH-230-A
    a8.p9.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cnt = 0;

void transfer(char *cfile, FILE *out) {
    //we declare a buffer to read from the file
    //and open the input file in binary read mode
    char buffer[64];
    memset(buffer, '\0', sizeof(buffer)); 
    FILE *pfile = fopen(cfile, "rb");
    if (pfile == NULL) {
        exit(1);
    }
    //we go to the end of the file to get the length
    //of the file then we go back to the beginning
    fseek(pfile, 0L, SEEK_END);
    long l = ftell(pfile);
    fseek(pfile, 0L, SEEK_SET);
    
    while (l > 0) {
        size_t byteread = fread(buffer, 1, sizeof(buffer), pfile);
        if (byteread > 0) {
            //if the length of the content is smaller than the buffer
            //we print each character
            for (int i = 0; i < byteread; i++)
                printf("%c", buffer[i]); 
            printf("\n");
            fwrite(buffer, 1, byteread, out); 
           l -= byteread;
        }
    }
    fputc('\n', out);
    fclose(pfile);
    cnt++;//increases the number of files read
}

int main() {
    int n, i;
    char cfile[100];
    FILE *out = fopen("output.txt", "wb");
    if (out == NULL) {
        exit(1);
    }
    scanf("%d", &n); //number of files that are processed
    getchar(); //consume newline character
    printf("Concatenating the content of %d files ...\n", n);
    //for every file we read it and call transfer
    for (i = 0; i < n; i++) {
        scanf("%s", cfile); 
        transfer(cfile, out);
    }
    fclose(out);
    //checks to see if all files have been processed
    if (cnt == n) {
        printf("The result was written into output.txt\n");
    }
    return 0; 
}