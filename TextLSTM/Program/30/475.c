int main () {
    int n, a, b, sum = 0;
    cin >> n;
    for (a = 1; a <= n; a++) {
        if (a % 7 == 0)
            continue;
        if (a == 17 || a == 27 || a == 37 || a == 47 || a == 57 || a == 67 || a == 87 || a == 97)
            continue;
        b = a / 10;
        if (b == 7)
            continue;
        sum = sum + a * a;
    }
    cout << sum << endl;
    return 0;
}

