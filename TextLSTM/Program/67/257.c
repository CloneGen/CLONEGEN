int main () {
    int i, n, sum, d;
    int a, b;
    float x, y, c;
    cin >> n;
    cin >> a >> b;
    x = 1.0 * b / a;
    for (i = 1; i <= n - 1; i++) {
        cin >> sum >> d;
        y = 1.0 * d / sum;
        c = y - x;
        if (c >= 0.05) {
            printf ("better\n");
        }
        else if (c <= -0.05) {
            printf ("worse\n");
        }
        else {
            printf ("same\n");
        }
    }
    return 0;
}

