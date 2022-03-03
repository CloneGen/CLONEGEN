int f (int a, int b) {
    int num = 1, i;
    for (i = b; i <= sqrt (a); i++) {
        if (a % i == 0)
            num += f (a / i, i);
    }
    return num;
}

int main () {
    int i, n, a;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        cout << f (a, 2) << endl;
    }
    return 0;
}

