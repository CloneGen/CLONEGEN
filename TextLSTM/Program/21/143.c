int a [501];

int main () {
    int n, x;
    double avr = 0;
    cin >> n;
    for (x = 1; x <= n; x++) {
        cin >> a[x];
        avr += a[x];
    }
    avr = avr / n;
    sort (&a[1], &a[n] + 1);
    if (avr - a[1] > a[n] - avr) {
        cout << a[1] << endl;
    }
    else if (avr - a[1] == a[n] - avr) {
        cout << a[1] << ',' << a[n] << endl;
    }
    else
        cout << a[n] << endl;
    return 0;
}

