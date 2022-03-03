int main () {
    int a [5] [5], b [5] = {0}, c [5], flag = 0;
    for (int i = 0;
    i < 5; i++)
        for (int j = 0;
        j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] > b[i]) {
                b[i] = a[i][j];
                c[i] = j;
            }
        }
    for (int i = 0;
    i < 5; i++) {
        int j;
        for (j = 0; j < 5; j++)
            if (a[i][c[i]] > a[j][c[i]])
                break;
        if (j == 5) {
            cout << i + 1 << ' ' << c[i] + 1 << ' ' << a[i][c[i]] << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}

