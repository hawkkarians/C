#include <stdio.h>

int main(int argc, char **argv) {
        FILE *fp;
        int c;
        fp =fopen(argv[1], "r"); 
        
        while ((c = getc(fp)) != EOF)
        {
            printf("%c", c);
        }

        fclose(fp);

        return 0;
}