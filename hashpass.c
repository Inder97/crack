# include <stdio.h>
# include <stdlib.h>
#include <string.h>
# include <ctype.h>
#include "md5.h"

int main(int argc, char * argv[])
{
    FILE *pass= fopen(argv[1], "r");
        if (!pass)
        {
            printf("Unable to open the file\n");
            exit(1);
        }
    
    FILE *hashes= fopen(argv[2], "w");
        if (!hashes)
        {
            printf("Unable to open the file\n");
            exit(1);
        }
    
    char line[1000];
    
    while (fgets(line,1000,pass)!=NULL)
    {
        fprintf (hashes, "%s\n", md5(line, strlen(line)-1));
        
    }
    
    fclose (pass);
    fclose( hashes);
    
    
    
    
    

}