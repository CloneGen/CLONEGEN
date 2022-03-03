int t = 0, ways;

void divide (int x, int h) {
    int i;
    if (x == 1) {
        t++;
        ways = t;
    }
    else
        for (i = h; i <= x; i++)
            if (x % i == 0) {
                h = i;
                divide (x / h, h);
            }
}

int main () {
    int n;
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
        t = 0;
        divide (a[i], 2);
        cout << ways << endl;
    }
    return 0;
}

