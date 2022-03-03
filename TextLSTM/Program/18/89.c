int main () {
    int a [100] [100];
    int n;
    int sum, Min;
    cin >> n;
    for (int num = 0;
    num < n; num++) {
        sum = 0;
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                cin >> a[i][j];
        for (int x = 1;
        x < n; x++) {
            for (int i = 0;
            i < n; i++) {
                Min = 10000;
                for (int col = 0;
                col < n; col++)
                    if (a[i][col] >= 0)
                        Min = Min < a[i][col] ? Min : a[i][col];
                for (int col = 0;
                col < n; col++)
                    a[i][col] -= Min;
            }
            for (int i = 0;
            i < n; i++) {
                Min = 10000;
                for (int row = 0;
                row < n; row++)
                    if (a[row][i] >= 0)
                        Min = Min < a[row][i] ? Min : a[row][i];
                for (int row = 0;
                row < n; row++)
                    a[row][i] -= Min;
            }
            sum += a[x][x];
            for (int i = 0;
            i < n; i++)
                a[x][i] = -1;
            for (int i = 0;
            i < n; i++)
                a[i][x] = -1;
        }
        cout << sum << endl;
    }
    return 0;
}

