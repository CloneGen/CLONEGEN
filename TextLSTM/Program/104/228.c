int main () {
    int m, n, i, j, flag = 1;
    cin >> m >> n;
    for (i = m; i > 0 && flag; i /= 2)
        for (j = n; j > 0 && flag; j /= 2)
            if (i == j) {
                cout << i;
                flag = 0;
            }
    return 0;
}

