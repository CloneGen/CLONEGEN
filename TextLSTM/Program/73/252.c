int main () {
    int a [6] [6], i, j, k, t = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            t = 0;
            for (k = 0; k < 5; k++) {
                if (a[i][j] > a[i][k])
                    t++;
                if (a[i][j] < a[k][j])
                    t++;
            }
            if (t == 8) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j];
                j = 5;
                i = 5;
            }
            else if (i == 4 && j == 4)
                cout << "not found";
        }
    return 0;
}

