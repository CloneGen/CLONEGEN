int s [1000] [1000];

int main () {
    int n, i, k, area, a, b, c, d;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (k = 0; k < n; k++) {
            scanf ("%d", &s[i][k]);
        }
    }
    for (i = 0; i < n; i++) {
        for (k = 0; k < n; k++) {
            if (s[i][k] == 0) {
                a = i;
                b = k;
                break;
            }
        }
        if (k == n) {
            if (s[i][k - 1] == 0) {
                break;
            }
        }
        else {
            break;
        }
    }
    for (i = n - 1; i >= 0; i--) {
        for (k = n - 1; k >= 0; k--) {
            if (s[i][k] == 0) {
                c = i;
                d = k;
                break;
            }
        }
        if (k == -1) {
            if (s[i][0] == 0) {
                break;
            }
        }
        else {
            break;
        }
    }
    area = (d - b - 1) * (c - a - 1);
    printf ("%d", area);
    return 0;
}

