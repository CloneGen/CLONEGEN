int factor (int x, int y) {
    int i;
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            break;
        }
    }
    if (i == x) {
        return 1;
    }
    else {
        int sum = 0;
        if (x == y) {
            for (i = y / x + 1; i <= sqrt (x); i++) {
                if (x % i == 0) {
                    sum = sum + factor (x / i, x);
                }
                else
                    continue;
            }
            return sum + 1;
        }
        else {
            for (i = y / x; i <= sqrt (x); i++) {
                if (x % i == 0) {
                    sum = sum + factor (x / i, x);
                }
                else
                    continue;
            }
            return sum + 1;
        }
    }
}

int main () {
    int n;
    cin >> n;
    const  int m = n;
    int a [m], j;
    for (j = 0; j < n; j++) {
        cin >> a[j];
    }
    for (j = 0; j < n; j++) {
        cout << factor (a[j], a[j]) << endl;
    }
    return 0;
}

