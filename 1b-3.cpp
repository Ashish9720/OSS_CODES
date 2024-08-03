#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 1000
#define MAX_WORD_LENGTH 50


typedef struct {
    char word[MAX_WORD_LENGTH];
    int frequency;
} WordFrequency;


void countWords(char *text, WordFrequency frequencies[], int *wordCount);
int findWord(char *word, WordFrequency frequencies[], int wordCount);
void printFrequencies(WordFrequency frequencies[], int wordCount);

int main() {
    char input[256];
    WordFrequency frequencies[MAX_WORDS];
    int wordCount = 0;

    printf("Enter text (type END to finish):\n");

    while (fgets(input, sizeof(input), stdin)) {
        char *newline = strchr(input, '\n');
        if (newline) *newline = '\0';

        if (strcmp(input, "END") == 0) break;

        countWords(input, frequencies, &wordCount);
    }

    printFrequencies(frequencies, wordCount);

    return 0;
}

void countWords(char *text, WordFrequency frequencies[], int *wordCount) {
    char *token;
    char *delimiters = " .,!?;:\t\n";

    token = strtok(text, delimiters);
    while (token != NULL) {
        int index = findWord(token, frequencies, *wordCount);
        if (index == -1) {
            strcpy(frequencies[*wordCount].word, token);
            frequencies[*wordCount].frequency = 1;
            (*wordCount)++;
        } else {
            frequencies[index].frequency++;
        }
        token = strtok(NULL, delimiters);
    }
}

int findWord(char *word, WordFrequency frequencies[], int wordCount) {
    for (int i = 0; i < wordCount; i++) {
        if (strcmp(frequencies[i].word, word) == 0) {
            return i;
        }
    }
    return -1;
}

void printFrequencies(WordFrequency frequencies[], int wordCount) {
    printf("\nWord Frequencies:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", frequencies[i].word, frequencies[i].frequency);
    }
}
