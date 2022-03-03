int kingmonkey (int n, int m);

int main () {
    int n, m;
    int result;
    for (;;) {
        scanf ("%d %d", &n, &m);
        if ((n == 0) && (m == 0)) {
            break;
        }
        else {
            result = kingmonkey (n, m);
            printf ("%d\n", result);
        }
    }
    return 0;
}

int kingmonkey (int n, int m) {
    if (n == 1) {
        return 1;
    }
    else {
        int tmp = (kingmonkey (n - 1, m) + m);
        if ((tmp % n) == 0) {
            tmp = n;
        }
        else if (tmp > n) {
            tmp = tmp % n;
        }
        return tmp;
    }
}

