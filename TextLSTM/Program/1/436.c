int divide (int n, int a) {
    int s = 0, i;
    if (n == 1)
        return 1;
    for (i = a; i > 1; i--)
        if (n % i == 0)
            s += divide (n / i, i);
    return s;
}

int main () {
    int n, k;
    cin >> k;
    while (k > 0) {
        cin >> n;
        cout << divide (n, n) << endl;
        k--;
    }
    return 0;
}

