int main () {
    int m, i, j, k, jud1, jud2;
    cin >> m;
    for (i = 3; i <= (m / 2); i = i + 2) {
        jud1 = 1;
        for (j = 3; j <= sqrt (i); j = j + 2) {
            if (i % j == 0) {
                jud1 = 0;
                break;
            }
        }
        if (jud1) {
            k = m - i;
            jud2 = 1;
            for (j = 3; j <= sqrt (k); j = j + 2) {
                if (k % j == 0) {
                    jud2 = 0;
                    break;
                }
            }
            if (jud2)
                cout << i << " " << k << endl;
        }
    }
    return 0;
}

