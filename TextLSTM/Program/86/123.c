int n;

int main () {
    int x, k, sum, now;
    scanf ("%d", &n);
    int t = n;
    while (n--) {
        sum = now = 0;
        scanf ("%d", &x);
        while (x--) {
            scanf ("%d", &k);
            if (k - sum + now > 60)
                continue;
            else
                now += k - sum + 3, sum = k;
        }
        if (now < 60)
            sum += 60 - now;
        printf ("%d\n", sum);
    }
    return 0;
}

