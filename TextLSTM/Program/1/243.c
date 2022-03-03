int cnt = 0;

void slv (int nm, int pr) {
    int i;
    if (nm >= pr) {
        cnt++;
        if (pr == 1)
            pr++;
        for (i = pr; i <= nm; i++) {
            if (nm % i == 0) {
                slv (nm / i, i);
            }
        }
    }
}

int main () {
    int n, i, num;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cnt = 0;
        cin >> num;
        slv (num, 1);
        cout << cnt << endl;
    }
}

