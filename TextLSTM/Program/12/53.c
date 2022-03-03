int main () {
    int i, j, k, m;
    for (i = 1;; i++) {
        int num [16];
        for (j = 1;; j++) {
            cin >> num[j];
            if (num[j] == 0)
                break;
        }
        if (num[1] == -1)
            break;
        int cnt = 0;
        for (k = 1; k <= j - 1; k++)
            for (m = 1; m <= j - 1; m++) {
                if (num[k] * 2 == num[m])
                    cnt++;
            }
        cout << cnt << endl;
    }
    return 0;
}

