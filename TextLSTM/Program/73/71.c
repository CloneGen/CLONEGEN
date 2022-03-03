int main () {
    int a [5] [5], flag = 0;
    for (int i = 0;
    i < 5; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
    }
    for (int r = 0;
    r < 5; r++) {
        int k = 0;
        for (int j = 1;
        j < 5; j++) {
            if (a[r][k] < a[r][j])
                k = j;
        }
        if (a[r][k] < a[(r + 4) % 5][k] && a[r][k] < a[(r + 1) % 5][k] && a[r][k] < a[(r + 2) % 5][k] && a[r][k] < a[(r + 3) % 5][k]) {
            flag = 1;
            cout << r + 1 << " " << k + 1 << " " << a[r][k] << endl;
        }
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

