void fenpg (int, int);
int k, pg [20];

int main () {
    int t, m, n;
    cin >> t;
    for (int i = 1;
    i <= t; i++) {
        cin >> m >> n;
        k = 0;
        for (int j = n;
        j >= 1; j--) {
            for (int o = 1;
            o <= 19; o++) {
                pg[o] = 0;
            }
            pg[j + 1] = m;
            fenpg (m, j);
        }
        cout << k << endl;
    }
    return 0;
}

void fenpg (int pgleft, int pzleft) {
    if (pgleft == 0 && pzleft == 0) {
        k++;
        return;
    }
    else if (pgleft > 0 && pzleft > 0) {
        for (int i = pgleft;
        i > 0; i--) {
            if (i <= pg[pzleft + 1]) {
                pg[pzleft] = i;
                fenpg (pgleft - i, pzleft - 1);
            }
        }
    }
}

