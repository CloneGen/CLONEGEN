int main () {
    int m [6] [6], x1 [6], y1 [6], x2 [6], y2 [6], h [6], l [6], i, k, n, j = 0;
    for (i = 1; i <= 5; i++)
        for (k = 1; k <= 5; k++)
            cin >> m[i][k];
    for (i = 1; i <= 5; i++) {
        h[i] = m[i][1];
        x1[i] = i;
        y1[i] = 1;
        for (k = 1; k <= 5; k++) {
            if (m[i][k] > h[i]) {
                h[i] = m[i][k];
                x1[i] = i;
                y1[i] = k;
            }
        }
    }
    for (k = 1; k <= 5; k++) {
        l[k] = m[1][k];
        x2[k] = 1;
        y2[k] = k;
        for (i = 2; i <= 5; i++) {
            if (m[i][k] < l[k]) {
                l[k] = m[i][k];
                x2[k] = i;
                y2[k] = k;
            }
        }
    }
    for (n = 1; n <= 5; n++) {
        if (h[n] == l[y1[n]])
            if (x1[n] == x2[y1[n]])
                if (y1[n] == y2[y1[n]]) {
                    cout << x1[n] << " " << y1[n] << " " << h[n];
                    j++;
                }
    }
    if (j == 0)
        cout << "not found" << endl;
    return 0;
}

