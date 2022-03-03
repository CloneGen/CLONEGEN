int main () {
    int n, i, a, b, sum = 0;
    cin >> n;
    do
        if (n >= 100) {
            cout << "error,please input again" << endl;
            cin >> n;
        }
        else
            break;
    while (1);
    for (i = 1; i <= n; i++) {
        a = i / 10;
        b = i - (a * 10);
        if (i % 7 == 0 || a == 7 || b == 7)
            continue;
        sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

