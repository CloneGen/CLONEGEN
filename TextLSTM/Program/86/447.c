int main () {
    int a, a0, t, i, j, n, m;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        t = 0;
        a = 0;
        for (j = 0; j < m; j++) {
            cin >> a;
            t += 3;
            a += t;
            if (a > 60)
                break;
        }
        j++;
        while (j < m) {
            cin >> a0;
            j++;
        }
        t = 60 - t;
        if (a > 60)
            switch (a) {
            case 61 :
                t++;
                break;
            case 62 :
                t += 2;
                break;
            default :
                t += 3;
            }
        cout << t << endl;
    }
    return 0;
}

