int num (int, int, int);
int qufen (int);
int power (int, int);

int main () {
    int t;
    cin >> t;
    while (t >= 1) {
        int n, i, x, sum = 1;
        cin >> n;
        x = qufen (n);
        for (i = 2; i <= x; i++)
            sum = sum + num (n, i, 2);
        cout << sum << endl;
        t--;
    }
    return 0;
}

int qufen (int n) {
    int j;
    for (j = 1;; j++) {
        if (power (2, j) > n) {
            return j - 1;
            break;
        }
    }
}

int power (int a, int b) {
    int sum = 1, k;
    for (k = 1; k <= b; k++)
        sum = sum * a;
    return sum;
}

int num (int n, int g, int h) {
    if ((g == 1) && (n >= h))
        return 1;
    int i, j = 0, count = 0, a [20000];
    for (i = h; i < n; i++) {
        if (n % i == 0) {
            a[j] = i;
            j++;
        }
    }
    if (j == 0)
        return 0;
    else {
        for (i = 0; i < j; i++)
            count = count + num (n / a[i], g - 1, a[i]);
        return count;
    }
}

