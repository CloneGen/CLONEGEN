int main () {
    int a [100] [100], b [100] [100], c [100] [100] = {0}, x1, x2, y1, y2;
    cin >> x1 >> y1;
    for (int ia = 0;
    ia < x1; ia++) {
        for (int ka = 0;
        ka < y1; ka++)
            cin >> a[ia][ka];
    }
    cin >> x2 >> y2;
    for (int ib = 0;
    ib < x2; ib++) {
        for (int kb = 0;
        kb < y2; kb++)
            cin >> b[ib][kb];
    }
    for (int i = 0;
    i < x1; i++) {
        for (int k = 0;
        k < y2; k++) {
            for (int l = 0;
            l < x2; l++)
                c[i][k] = c[i][k] + a[i][l] * b[l][k];
        }
    }
    for (int ic = 0;
    ic < x1; ic++) {
        for (int kc = 0;
        kc < y2; kc++) {
            if (kc == 0)
                cout << c[ic][kc];
            else
                cout << " " << c[ic][kc];
        }
        cout << endl;
    }
    return 0;
}

