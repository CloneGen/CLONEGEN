int main () {
    int i, j, m = 0, count = 0;
    int num [100];
    for (;;) {
        m = 0;
        for (i = 0;; i++) {
            cin >> num[i];
            if (num[i] == 0 || num[i] == -1) {
                count = i;
                break;
            }
        }
        if (num[0] == -1)
            break;
        else {
            for (i = 0; i < count; i++)
                for (j = i + 1; j < count; j++) {
                    if ((num[i] == 2 * num[j]) || (num[j] == 2 * num[i]))
                        m++;
                }
            cout << m << endl;
        }
    }
    return 0;
}

