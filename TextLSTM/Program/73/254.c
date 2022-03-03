int main () {
    int a [6] [6];
    int i, j;
    int hang [6] = {0}, lie [6];
    int flag = 0;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++)
            cin >> a[i][j];
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++)
            if (a[i][j] > hang[i])
                hang[i] = a[i][j];
    for (j = 1; j <= 5; j++) {
        lie[j] = a[1][j];
        for (i = 1; i <= 5; i++)
            if (a[i][j] < lie[j])
                lie[j] = a[i][j];
    }
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++) {
            if (hang[i] == lie[j] && lie[j] == a[i][j]) {
                cout << i << " " << j << " " << hang[i] << endl;
                flag = 1;
            }
        }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

