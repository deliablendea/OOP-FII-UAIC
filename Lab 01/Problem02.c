/*
    Read a sentence from the input using scanf API. Then sort split it into words and write to the screen
    (using the printf API) the words sorted (from the longest one to the shortest one). If two words have
    the same length - they will be sorted out alphabetically. We consider that each word is separated from
    another one using space (one or multiple).

    Example: let's consider the following sentence: `"I went to the library yesterday"``.
    The program will print the following to the screen:
    yesterday
    library
    went
    the
    to
    I
*/

#include <stdio.h>
#include <string.h>

char Words[256][256], String[256];
int Count = 0;

int main() {
    scanf("%[^\n]", String);

    char* p = strtok(String, " ");
    while (p != NULL) {
        strcpy(Words[Count++], p);
        p = strtok(NULL, " ");
    }

    for (int i = 0; i < Count - 1; i++)
        for (int j = i + 1; j < Count; j++)
            if ((strlen(Words[i]) < strlen(Words[j])) || (strlen(Words[i]) == strlen(Words[j]) && strcmp(Words[i], Words[j]))) {
                char Aux[256] = "";
                strcpy(Aux, Words[i]);
                strcpy(Words[i], Words[j]);
                strcpy(Words[j], Aux);
            }

    for (int i = 0; i < Count; i++)
        printf("%s\n", Words[i]);

    return 0;
}