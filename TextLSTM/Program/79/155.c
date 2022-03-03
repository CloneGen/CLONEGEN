int main () {
    int m, n;
    do {
        int p [301] = {0}, q = 0, count = 0;
        cin >> n >> m;
        if (n == 0) {
            break;
        }
        for (int i = 1;
        ; i++) {
            if (i == n + 1) {
                i = 1;
            }
            if (p[i] == 1) {
                continue;
            }
            q++;
            if (q == m) {
                p[i] = 1;
                count++;
                if (count == n) {
                    cout << i << endl;
                    break;
                }
                q = 0;
                continue;
            }
        }
    }
    while (1);
    return 0;
}

