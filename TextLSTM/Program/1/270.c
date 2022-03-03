int t, a, flag, a1;

void find (int m, int min) {
    int i;
    for (i = 2; i <= sqrt ((double) m); i++) {
        if (m % i == 0) {
            if (i >= min) {
                t++;
                min = i;
                find (m / i, min);
            }
        }
    }
    return;
}

int main () {
    int n, ii;
    cin >> n;
    for (ii = 1; ii <= n; ii++) {
        t = 0;
        flag = 0;
        cin >> a;
        a1 = a;
        find (a, 2);
        cout << t + 1 << endl;
    }
    return 0;
}

