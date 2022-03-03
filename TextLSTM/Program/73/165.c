int main () {
    int a [6] [6], b [6] [6], c [6] [6];
    int i = 1, j = 1, temp1 = 0, temp2 = 0;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            cin >> a[i][j];
            c[i][j] = b[i][j] = a[i][j];
        }
    }
    for (i = 1; i <= 5; i++) {
        for (int k = 1;
        k <= 4; k++) {
            for (j = 1; j <= 5 - k; j++) {
                if (a[i][j] > a[i][j + 1]) {
                    temp1 = a[i][j];
                    a[i][j] = a[i][j + 1];
                    a[i][j + 1] = temp1;
                }
            }
        }
    }
    for (j = 1; j <= 5; j++) {
        for (int k = 1;
        k <= 4; k++) {
            for (i = 1; i <= 5 - k; i++) {
                if (b[i][j] > b[i + 1][j]) {
                    temp2 = b[i][j];
                    b[i][j] = b[i + 1][j];
                    b[i + 1][j] = temp2;
                }
            }
        }
    }
    int flag = 0;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (c[i][j] == a[i][5] && c[i][j] == b[1][j]) {
                cout << i << " " << j << " " << c[i][j] << endl;
                flag++;
            }
        }
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

