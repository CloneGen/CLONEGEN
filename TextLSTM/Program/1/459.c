int num = 0, t = 2;

void detach (int n) {
    int i;
    int q = t;
    if (n == 1) {
        num++;
    }
    else {
        for (i = t; i <= n / 2; i++) {
            if (n % i == 0) {
                n = n / i;
                t = i;
                detach (n);
                n = n * i;
                t = q;
            }
        }
        if (i > n / 2 && n >= t) {
            n = 1;
            detach (n);
        }
    }
}

int main () {
    int n, a;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a;
        detach (a);
        cout << num << endl;
        num = 0;
        t = 2;
    }
    return 0;
}

