int main () {
    int d, day, row, list, n, sum;
    char A [102] [102];
    row = 0;
    while (row < 102) {
        list = 0;
        while (list < 102) {
            A[row][list] = '#';
            list++;
        }
        row++;
    }
    scanf ("%d\n\n", &n);
    row = 1;
    while (row < n + 1) {
        list = 1;
        while (list < n + 1) {
            if (list == n) {
                scanf ("%c\n\n", &A[row][list]);
            }
            else {
                scanf ("%c", &A[row][list]);
            }
            list++;
        }
        row++;
    }
    scanf ("%d", &day);
    d = 1;
    while (d < day) {
        row = 1;
        while (row < n + 1) {
            list = 1;
            while (list < n + 1) {
                if (A[row][list] == '@') {
                    if (A[row + 1][list] == '.') {
                        A[row + 1][list] = 'x';
                    }
                    if (A[row - 1][list] == '.') {
                        A[row - 1][list] = 'x';
                    }
                    if (A[row][list + 1] == '.') {
                        A[row][list + 1] = 'x';
                    }
                    if (A[row][list - 1] == '.') {
                        A[row][list - 1] = 'x';
                    }
                }
                list++;
            }
            row++;
        }
        row = 1;
        while (row < n + 1) {
            list = 1;
            while (list < n + 1) {
                if (A[row][list] == 'x') {
                    A[row][list] = '@';
                }
                list++;
            }
            row++;
        }
        d++;
    }
    row = 1;
    sum = 0;
    while (row < n + 1) {
        list = 1;
        while (list < n + 1) {
            if (A[row][list] == '@') {
                sum = sum + 1;
            }
            list++;
        }
        row++;
    }
    printf ("%d", sum);
    return 0;
}

