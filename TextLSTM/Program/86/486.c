int main () {
    int n, i, t;
    cin >> n;
    while (n != 0) {
        n--;
        int time = 0, num = 0, count = 0;
        cin >> t;
        if (t == 0)
            cout << 60 << endl;
        else {
            int *p = &t;
            int a [*p];
            for (i = 0; i < t; i++)
                cin >> a[i];
            for (i = 0; i < t; i++) {
                if ((a[i] + 3 * (count + 1)) >= 60) {
                    if ((a[i] + 3 * count) >= 60) {
                        num = a[i - 1] + 60 - time;
                        break;
                    }
                    else {
                        num = a[i];
                        break;
                    }
                }
                count++;
                time = a[i] + 3 * count;
                num = a[i];
                if (i == t - 1)
                    num += 60 - time;
            }
            cout << num << endl;
        }
    }
    return 0;
}

