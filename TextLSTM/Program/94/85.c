int main () {
    int n;
    cin >> n;
    const  int n1 = n;
    int z [n1], t, t1;
    for (t = 0; t < n1; ++t)
        cin >> z[t];
    int numofdel = 0;
    for (t = 0; t < n; ++t)
        if (z[t] % 2 == 0) {
            for (t1 = t; t1 < n; ++t1)
                z[t1] = z[t1 + 1];
            ++numofdel;
            --n;
            --t;
        }
    const  int n2 = n1 - numofdel;
    int q [n2], change;
    for (t = 0; t < n2; ++t)
        q[t] = z[t];
    for (t = 0; t < n2; ++t)
        for (t1 = t; t1 < n2; ++t1)
            if (q[t] > q[t1]) {
                change = q[t];
                q[t] = q[t1];
                q[t1] = change;
            }
    for (t = 0; t < n2; ++t) {
        if (t == 0)
            cout << q[t];
        else
            cout << "," << q[t];
    }
    return 0;
}

