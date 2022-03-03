int main () {
    int n, m, i, j, shu [100] [100], hang = 1, lie = 1, count, mark, zddjx, duijiao, jh = 1, jl = 1;
    cin >> n >> m;
    count = n * m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> shu[i][j];
        }
    }
    if (n == 1) {
        for (j = 1; j <= m; j++) {
            cout << shu[1][j] << endl;
        }
    }
    if (n == 1) {
        return 0;
    }
    if (m == 1) {
        for (j = 1; j <= n; j++) {
            cout << shu[j][1] << endl;
        }
        return 0;
    }
    if (m == 1) {
        return 0;
    }
    cout << shu[hang][lie] << endl;
    duijiao = hang + lie;
    count--;
    while (count != 0) {
        duijiao++;
        hang = jh;
        lie = duijiao - hang;
        if (lie == m) {
            jh++;
        }
        while (lie >= jl) {
            cout << shu[hang][lie] << endl;
            count--;
            hang++;
            lie--;
        }
        if (hang == n + 1) {
            jl++;
        }
    }
    return 0;
}

