int main () {
    char a [100], b [100];
    int la = 0, lb = 0, same = 1, i = 0, j = 0, aused [100] = {0}, bused [100] = {0};
    cin >> a >> b;
    la = strlen (a);
    lb = strlen (b);
    if (la != lb)
        cout << "NO" << endl;
    else {
        for (i = 0; i < la; i++) {
            for (j = 0; j < lb; j++) {
                if (a[i] == b[j] && bused[j] == 0) {
                    bused[j] = 1;
                    aused[i] = 1;
                    break;
                }
            }
            if (aused[i] == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
        for (i = 0; i < lb; i++) {
            if (bused[i] == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}

