#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    int i = 0, index;
    char alpha;
    char *result = malloc(sizeof(char) * (strlen(*strs) + 1));

    // initialize result with /0
    for (index = 0; index <= strlen(*strs); index++)
        result[index] = '\0';

    while ((alpha = *(*strs + i))) {
        for (index = 1; index < strsSize; index++) 
            if (alpha != strs[index][i]) 
                return result;
        result[i++] = alpha;
    }
    return result;
}

