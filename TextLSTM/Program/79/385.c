int main () {
    int N, m;
    while (true) {
        int count = 0, number = 0;
        cin >> N >> m;
        if (N == 0 && m == 0)
            break;
        const  int n = N;
        int a [n + 1];
        memset (a, 0, sizeof a);
        for (int i = 1;
        ; ++i) {
            if (i > n)
                i = i - n;
            if (a[i] == 1)
                continue;
            else {
                ++count;
            }
            if (number == n - 1) {
                break;
            }
            if (count == m) {
                number++;
                count = 0;
                a[i] = 1;
            }
        }
        for (int i = 1;
        i <= n; ++i)
            if (a[i] == 0)
                cout << i << endl;
    }
    return 0;
}

