int main () {
    int n, i, j, num, a [21], ans;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        if (num == 0)
            cout << 60 << endl;
        else {
            for (j = 1; j <= num; j++)
                cin >> a[j];
            for (j = 1; j <= num; j++)
                a[j] = a[j] + (j - 1) * 3;
            ans = 60;
            for (j = 1; j <= num; j++)
                if (a[j] <= 57)
                    ans = ans - 3;
                else if (a[j] < 60)
                    ans = ans - (60 - a[j]);
            cout << ans << endl;
        }
    }
    return 0;
}

