int main () {
    int n, b, i, k;
    cin >> n;
    b = n;
    if (b == 0)
        cout << b;
    for (i = 0; b >= 1; i++) {
        k = b % 10;
        b = b / 10;
        cout << k;
    }
    return 0;
}

