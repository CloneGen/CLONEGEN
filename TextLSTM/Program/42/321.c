int main () {
    int n, i, tn, j, k;
    cin >> n;
    int m [n];
    for (i = 0; i < n; i++) {
        cin >> m[i];
    }
    cin >> tn;
    int I, N = n;
    for (I = n - 1; I >= 1; --I) {
        if (m[I] == tn)
            N = N -1;
        else
            break;
    }
    k = N;
    for (i = 0; i < N; i++) {
        if (m[i] == tn) {
            k = k - 1;
            for (j = i; j < k; j++)
                m[j] = m[j + 1];
            i = i - 1;
        }
    }
    for (i = 0; i < k - 1; i++) {
        cout << m[i] << " ";
    }
    cout << m[k - 1] << endl;
    return 0;
}

