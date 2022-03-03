int sum = 0;

int main () {
    void Subtraction (int [100] [100], int);
    int n = 0;
    cin >> n;
    int a [100] [100];
    for (int f = 1;
    f <= n; f++) {
        for (int i = 0;
        i <= n - 1; i++) {
            for (int j = 0;
            j <= n - 1; j++) {
                cin >> a[i][j];
            }
        }
        sum = 0;
        Subtraction (a, n);
        if (f == n)
            cout << sum;
        else
            cout << sum << endl;
    }
    return 0;
}

void Subtraction (int m [100] [100], int n) {
    if (n != 1) {
        for (int i = 0;
        i <= n - 1; i++) {
            int min = m[i][0];
            for (int j = 0;
            j <= n - 1; j++) {
                if (min > m[i][j])
                    min = m[i][j];
            }
            for (int j = 0;
            j <= n - 1; j++) {
                m[i][j] -= min;
            }
        }
        for (int i = 0;
        i <= n - 1; i++) {
            int min = m[0][i];
            for (int j = 0;
            j <= n - 1; j++) {
                if (min > m[j][i])
                    min = m[j][i];
            }
            for (int j = 0;
            j <= n - 1; j++) {
                m[j][i] -= min;
            }
        }
        sum += m[1][1];
        int mtuta [100] [100];
        for (int i = 0;
        i <= n - 1; i++) {
            if (i == 1)
                continue;
            for (int j = 0;
            j <= n - 1; j++) {
                if (j == 1)
                    continue;
                mtuta[i - (i != 0)][j - (j != 0)] = m[i][j];
            }
        }
        Subtraction (mtuta, n - 1);
    }
}

