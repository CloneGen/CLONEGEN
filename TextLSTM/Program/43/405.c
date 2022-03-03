int check (int a) {
    int i, k;
    k = 0;
    if (a == 2 || a == 3)
        k = 0;
    else {
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                k = k + 1;
                break;
            }
        }
    }
    if (k == 0)
        return a;
    else
        return 0;
}

int main () {
    int m, i, j;
    cin >> m;
    for (i = 2; i < m; i++) {
        if (check (i) == 0)
            continue;
        else {
            j = m - i;
            if (check (j) == 0 || j == 1)
                continue;
            else {
                if (i <= j)
                    cout << i << ' ' << j << endl;
            }
        }
    }
    cin.get ();
    return 0;
}

