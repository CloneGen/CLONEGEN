int main () {
    int a [5] [5];
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            cin >> a[i][j];
        }
    }
    int ex [2] [5];
    memset (ex, 0, sizeof (ex));
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            if (a[i][j] > a[i][ex[0][i]])
                ex[0][i] = j;
        }
    }
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            if (a[j][i] < a[ex[1][i]][i])
                ex[1][i] = j;
        }
    }
    int i = 0;
    for (; i < 5; i++) {
        if (ex[1][ex[0][i]] == i) {
            cout << i + 1 << ' ' << ex[0][i] + 1 << ' ' << a[i][ex[0][i]] << endl;
            break;
        }
    }
    if (i == 5)
        cout << "not found";
    return 0;
}

