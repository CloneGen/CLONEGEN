int main () {
    int n, i;
    cin >> n;
    float a [n], b [n], c [n];
    for (i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        c[i] = b[i] / a[i];
    }
    for (i = 2; i <= n; i++) {
        if (c[i] - c[1] > 0.05)
            cout << "better" << endl;
        else if (c[1] - c[i] > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

