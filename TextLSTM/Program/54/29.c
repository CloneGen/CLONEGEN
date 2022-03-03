int n, k;

int f (int a, int m) {
    int b;
    b = a;
    if (b % (n - 1) != 0)
        return 0;
    b = b / (n - 1) * n + k;
    if (m == n)
        return b;
    return f (b, m + 1);
}

int main () {
    cin >> n >> k;
    int sum;
    for (int a = n + k;
    a > 0; a += n) {
        sum = f (a, 2);
        if (sum == 0)
            continue;
        break;
    }
    cout << sum;
}

