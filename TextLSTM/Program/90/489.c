int put (int m, int n) {
    int sum, sum1, sum2 = 0;
    if (n == 1)
        sum = 1;
    else {
        if (m == 1)
            sum = 1;
        else {
            if (n > m)
                sum1 = put (m, n - m);
            else {
                if (n == m)
                    sum1 = 1;
                else
                    sum1 = 0;
            }
            sum2 = put (m - 1, n);
            sum = sum1 + sum2;
        }
    }
    return sum;
}

int main () {
    int i, m, n, k, t;
    cin >> k;
    for (i = 0; i < k; i++) {
        cin >> n >> m;
        t = put (m, n);
        cout << t << endl;
    }
    return 0;
}

