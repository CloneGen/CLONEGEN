int main () {
    int n;
    cin >> n;
    const  int m = n + 1;
    char a [m] [81];
    int i, j;
    for (i = 0; i < m; i++) {
        cin.getline (a[i], 81);
    }
    for (i = 1; i <= n; i++) {
        if ((a[i][0] < 65) || (a[i][0] > 90 && a[i][0] < 95) || (a[i][0] == 96) || (a[i][0] > 122)) {
            cout << "0" << endl;
            continue;
        }
        for (j = 1; j <= strlen (a[i]); j++) {
            if (a[i][j] == '\0') {
                break;
            }
            if ((a[i][j] >= 48 && a[i][j] <= 57) || (a[i][j] >= 65 && a[i][j] <= 90) || (a[i][j] == 95) || (a[i][j] >= 97 && a[i][j] <= 122)) {
                continue;
            }
            else {
                cout << "0" << endl;
                break;
            }
        }
        if (j == strlen (a[i])) {
            cout << "1" << endl;
            continue;
        }
    }
    return 0;
}

