int main () {
    int n, a [101], number, i;
    cin >> n;
    for (i = 1; i <= 100; i++)
        a[i] = 0;
    cin >> number;
    cout << number;
    a[number] = 1;
    for (i = 1; i <= n - 1; i++) {
        cin >> number;
        if (a[number] == 0) {
            a[number] = 1;
            cout << " " << number;
        }
    }
    return 0;
}

