int f (int m, int min);

int main () {
    int n, i, a [100], sum [100];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        sum[i] = f (a[i], 2);
        cout << sum[i] << endl;
    }
    return 0;
}

int f (int m, int min) {
    int i, sum = 0;
    if (m == min || m == 1)
        return 1;
    else if (m < min)
        return 0;
    else if (m > min) {
        for (i = min; i <= m; i++)
            if (m % i == 0)
                sum += f (m / i, i);
        return sum;
    }
}

