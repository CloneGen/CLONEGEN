int f (int q, int x) {
    if (q < x) {
        int i, k, p, sum;
        k = 0;
        sum = 0;
        p = 0;
        for (i = 2; i <= x / 2; i++)
            if (x % i == 0)
                k = k + 1;
        if (k == 0)
            return 1;
        else {
            for (i = q; i <= sqrt (x); i++)
                if (x % i == 0)
                    sum = sum + f (i, x / i);
            return sum + 1;
            p = 0;
            sum = 0;
        }
    }
    else {
        if (q == x)
            return 1;
        else
            return 0;
    }
}

int main () {
    int n, i, x, sum;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &x);
        sum = f (2, x);
        printf ("%d\n", sum);
    }
}

