int main () {
    int a, t, i;
    while (1) {
        a = 0;
        t = 0;
        cin >> a;
        if (a == -1) {
            break;
        }
        int num [17] = {0};
        num[1] = a;
        for (i = 2; i <= 16; i++) {
            cin >> num[i];
            if (num[i] == 0) {
                break;
            }
        }
        for (int r = 1;
        r <= (i - 1); r++) {
            for (int s = 1;
            s <= (i - 1); s++) {
                if (num[r] == 2 * num[s]) {
                    t = t + 1;
                }
            }
        }
        cout << t << endl;
    }
    return 0;
}

