int main () {
    int n = 0, i1 = 0, i2 = 0, j1 = 0, j2 = 0, j3 = 0, i = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> i1 >> i2;
        if ((i1 >= 90 && i1 <= 140) && (i2 >= 60 && i2 <= 90)) {
            j1 += 1;
            j2 = j1;
        }
        else {
            j1 = 0;
        }
        if (j3 <= j2) {
            j3 = j2;
        }
    }
    cout << j3;
    return 0;
}

