int main () {
    int i, j, s, ii, ss, kk;
    char a [1000];
    cin >> a;
    s = strlen (a);
    for (i = 2; i <= s; i++) {
        ss = 0;
        for (j = 0; j + i <= s; j++) {
            for (ii = 0; ii <= i - 1; ii++)
                if (a[j + ii] == a[j + i - 1 - ii])
                    ss = 1;
                else {
                    ss = 0;
                    break;
                }
            if (ss == 1)
                for (kk = 0; kk < i; kk++)
                    cout << a[j + kk];
            if (ss == 1)
                cout << endl;
        }
    }
    return 0;
}

