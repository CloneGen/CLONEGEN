int a [11] [11], b [11] [11], day = 0;

int main () {
    int m, n;
    cin >> m >> n;
    void result (int p, int q);
    for (int i = 0;
    i <= 11; i++) {
        for (int j = 0;
        j <= 11; j++) {
            a[i][j] = 0;
        }
    }
    a[5][5] = m;
    result (m, n);
    return 0;
}

void result (int p, int q) {
    if (day < q) {
        for (int r = 1;
        r <= 9; r++) {
            for (int s = 1;
            s <= 9; s++) {
                b[r][s] = a[r][s];
                for (int temp1 = r - 1;
                temp1 <= r + 1; temp1++) {
                    for (int temp2 = s - 1;
                    temp2 <= s + 1; temp2++) {
                        b[r][s] += a[temp1][temp2];
                    }
                }
            }
        }
        day++;
        for (int i = 1;
        i <= 9; i++) {
            for (int j = 1;
            j <= 9; j++) {
                a[i][j] = b[i][j];
            }
        }
        result (p, q);
    }
    else {
        for (int i = 1;
        i <= 9; i++) {
            for (int j = 1;
            j <= 9; j++) {
                if (j < 9) {
                    cout << a[i][j] << " ";
                }
                else {
                    cout << a[i][j] << endl;
                }
            }
        }
    }
}

