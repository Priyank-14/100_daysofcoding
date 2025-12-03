/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/
 #include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch, prev = ' ';
    int characters = 0, words = 0, lines = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n')
            lines++;
        int isSpace = (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r');
        if (!isSpace && (prev == ' ' || prev == '\n' || prev == '\t' || prev == '\r'))
            words++;
        prev = ch;
    }

    fclose(fp);

    if (characters > 0 && prev != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

