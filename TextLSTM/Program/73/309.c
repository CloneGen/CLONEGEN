int main () {
    int a [5] [5], g = 0;
    for (int i = 0;
    i < 5; i++)
        for (int j = 0;
        j < 5; j++)
            cin >> a[i][j];
    for (int i = 0;
    i < 5; i++)
        for (int j = 0;
        j < 5; j++)
            if (a[i][j] <= a[0][j] && a[i][j] <= a[1][j] && a[i][j] <= a[2][j] && a[i][j] <= a[3][j] && a[i][j] <= a[4][j] && a[i][j] >= a[i][0] && a[i][j] >= a[i][1] && a[i][j] >= a[i][2] && a[i][j] >= a[i][3] && a[i][j] >= a[i][4]) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
                g = 1;
            }
    if (g == 0)
        cout << "not found" << endl;
    return 0;
}

