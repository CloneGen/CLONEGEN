int main () {
    int i, j, n, zl [500] [500], sti, stj, dsti, dstj;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> zl[i][j];
            if (zl[i][j] == 0) {
                sti = i;
                stj = j;
            }
        }
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            if (zl[i][j] == 0) {
                dsti = i;
                dstj = j;
            }
        }
    }
    int s = (sti - dsti - 1) * (stj - dstj - 1);
    cout << s << endl;
    return 0;
}

