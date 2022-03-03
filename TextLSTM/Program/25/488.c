int main () {
    int j, i, len, n;
    int involution [5000];
    memset (involution, 0, sizeof (involution));
    cin >> n;
    involution[0] = 1;
    len = 1;
    for (j = 1; j <= n; j++) {
        for (i = 0; i < len; i++) {
            involution[i] *= 2;
        }
        for (i = 0; i < len; i++) {
            if (involution[i] >= 10) {
                involution[i + 1] += involution[i] / 10;
                involution[i] %= 10;
            }
        }
        if (involution[len] != 0)
            len++;
    }
    for (j = len - 1; j >= 0; j--)
        cout << involution[j];
    cout << endl;
    return 0;
}

