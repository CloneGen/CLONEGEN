int n, i;

int f (int a, int min) {
    if (a < min) {
        return 0;
    }
    int result = 1;
    for (int i = min;
    i < a; i++) {
        if (a % i == 0) {
            result += f (a / i, i);
        }
    }
    return result;
}

int main () {
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cout << f (a[i], 2) << endl;
    }
    return 0;
}

