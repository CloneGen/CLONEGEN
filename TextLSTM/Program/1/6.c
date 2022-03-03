int sum (int);
int g_count, g_j;

int main () {
    int n, a, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        g_count = 0;
        g_j = 2;
        cin >> a;
        cout << sum (a) + 1 << endl;
    }
    return 0;
}

int sum (int a) {
    int i, b;
    b = (int) sqrt ((double) a);
    for (i = g_j; i <= b; i++) {
        if (a % i == 0) {
            g_j = i;
            g_count++;
            sum (a / i);
        }
    }
    return g_count;
}

