int main () {
    int n, i, t = 0, a [100], k = 0, m = 1, min, max, result = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        m = 1;
        cin >> max >> min;
        if (max < 90)
            m = 0;
        else {
            if (max > 140)
                m = 0;
        }
        if (min > 90)
            m = 0;
        else {
            if (min < 60)
                m = 0;
        }
        if (m == 1)
            t++;
        else {
            a[k] = t;
            k++;
            t = 0;
        }
    }
    a[k] = t;
    k++;
    for (i = 0; i < k; i++)
        if (result < a[i])
            result = a[i];
    cout << result << endl;
    return 0;
}

