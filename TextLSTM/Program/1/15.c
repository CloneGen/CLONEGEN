int part (int x, int t) {
    int i;
    int number = 1;
    if (x == 1) {
        return 0;
    }
    if (x == 2) {
        return 1;
    }
    for (i = t; i <= sqrt (x); i++) {
        if (x % i == 0) {
            number += part (x / i, i);
        }
    }
    return number;
}

int main () {
    int i, n, a;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        cout << part (a, 2) << endl;
    }
    return 0;
}

