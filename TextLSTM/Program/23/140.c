int main () {
    char a [101], b [51] [51];
    int i = 0, j = 0, p = 0;
    int n = 0;
    cin.getline (a, 10000);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != ' ') {
            b[j][p] = a[i];
            p = p + 1;
        }
        else {
            b[j][p] = ' ';
            j = j + 1;
            p = 0;
        }
    }
    n = j;
    b[j][p] = ' ';
    for (j = n; j >= 1; j--) {
        for (p = 0; b[j][p] != ' '; p++) {
            cout << b[j][p];
        }
        cout << ' ';
    }
    for (p = 0; b[0][p] != ' '; p++) {
        cout << b[0][p];
    }
    return 0;
}

