#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 1000000007
#define MOD2 998244353

// Function to read an entire line of input
char* readLine() {
    char *line = NULL;
    size_t len = 0;
    getline(&line, &len, stdin);
    return line;
}

// Function to read an integer input from a line
int readInt() {
    char *line = readLine();
    int value = atoi(line);
    free(line);
    return value;
}

// Function to split a string into an array of integers
int* parseLineToIntArray(char *s, int *size) {
    int *result = NULL;
    int count = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        result = (int*)realloc(result, sizeof(int) * (count + 1));
        result[count++] = atoi(token);
        token = strtok(NULL, " ");
    }
    *size = count;
    return result;
}

// Function to transpose a given square matrix
int** transposeMatrix(int **matrix, int n) {
    int **transposed = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; ++i) {
        transposed[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// Function to process each test case
void processTestCase() {
    int size;
    char *line = readLine();
    int *dimensions = parseLineToIntArray(line, &size);
    free(line);
    int n = dimensions[0];
    int m = dimensions[1];
    free(dimensions);

    int **grid1 = (int**)malloc(n * sizeof(int*));
    int **grid2 = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; ++i) {
        line = readLine();
        grid1[i] = parseLineToIntArray(line, &size);
        free(line);
    }
    for (int i = 0; i < n; ++i) {
        line = readLine();
        grid2[i] = parseLineToIntArray(line, &size);
        free(line);
    }

    if (n == m) {
        int **transposed1 = transposeMatrix(grid1, n);
        int **transposed2 = transposeMatrix(grid2, n);

        // Check if all rows in grid2 are present in grid1
        for (int i = 0; i < n; ++i) {
            int found = 0;
            for (int j = 0; j < n; ++j) {
                if (memcmp(grid2[i], grid1[j], m * sizeof(int)) == 0) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("NO\n");
                return;
            }
        }

        // Check if all columns in transposed grid2 are present in transposed grid1
        for (int i = 0; i < n; ++i) {
            int found = 0;
            for (int j = 0; j < n; ++j) {
                if (memcmp(transposed2[i], transposed1[j], m * sizeof(int)) == 0) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("NO\n");
                return;
            }
        }
        printf("YES\n");

        for (int i = 0; i < n; ++i) {
            free(transposed1[i]);
            free(transposed2[i]);
        }
        free(transposed1);
        free(transposed2);
    } else {
        // Check if all rows in grid2 are present in grid1
        for (int i = 0; i < n; ++i) {
            int found = 0;
            for (int j = 0; j < n; ++j) {
                if (memcmp(grid2[i], grid1[j], m * sizeof(int)) == 0) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("NO\n");
                return;
            }
        }

        // Check if all columns in grid2 are present in grid1
        for (int j = 0; j < m; ++j) {
            int found = 0;
            for (int k = 0; k < m; ++k) {
                int match = 1;
                for (int i = 0; i < n; ++i) {
                    if (grid2[i][j] != grid1[i][k]) {
                        match = 0;
                        break;
                    }
                }
                if (match) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("NO\n");
                return;
            }
        }
        printf("YES\n");
    }

    for (int i = 0; i < n; ++i) {
        free(grid1[i]);
        free(grid2[i]);
    }
    free(grid1);
    free(grid2);
}

int main() {
    int t = readInt(); // Read number of test cases
    for (int i = 0; i < t; ++i) {
        processTestCase(); // Process each test case
    }
    return 0;
}


