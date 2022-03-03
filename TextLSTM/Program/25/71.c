int main () {
    int n [31], m, flag;
    cin >> m;
    for (int i = 0;
    i < 30; i++)
        n[i] = 0;
    n[30] = 1;
    for (int i = 0;
    i < m; i++) {
        for (int j = 30;
        j >= 0; j--) {
            n[j] *= 2;
        }
        for (int j = 30;
        j > 0; j--) {
            if (n[j] >= 10) {
                n[j - 1] += n[j] / 10;
                n[j] %= 10;
            }
        }
    }
    for (int i = 0;
    i < 31; i++) {
        if (n[i] > 0) {
            flag = i;
            break;
        }
    }
    for (int i = flag;
    i < 31; i++)
        cout << n[i];
    return 0;
}

