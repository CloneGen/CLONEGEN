int main () {
    int n, a [100] = {1}, Len = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        for (int j = Len;
        j >= 0; j--) {
            a[j] *= 2;
            if (a[j] >= 10) {
                a[j + 1] += a[j] / 10;
                a[j] %= 10;
                if (j + 1 > Len)
                    Len = j + 1;
            }
        }
    for (int i = Len;
    i >= 0; i--)
        cout << a[i];
    return 0;
}

