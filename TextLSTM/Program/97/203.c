int main () {
    int n = 0, a [6], i = 0, p = 0;
    cin >> n;
    a[0] = 100;
    a[1] = 50;
    a[2] = 20;
    a[3] = 10;
    a[4] = 5;
    a[5] = 1;
    for (i = 0; i < 6; i++) {
        p = n / a[i];
        cout << p << endl;
        n = n - p * a[i];
    }
    return 0;
}

