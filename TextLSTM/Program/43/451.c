int main () {
    int i, j, k, m, s;
    cin >> m;
    for (i = 3; i <= m / 2; i += 2) {
        s = sqrt (i);
        for (j = 2; j <= s; j++) {
            if (i % j == 0)
                break;
        }
        if (j == s + 1) {
            k = m - i;
            s = sqrt (k);
            for (j = 2; j <= s; j++) {
                if (k % j == 0)
                    break;
            }
            if (j == s + 1)
                cout << i << " " << k << endl;
        }
    }
    return 0;
}

