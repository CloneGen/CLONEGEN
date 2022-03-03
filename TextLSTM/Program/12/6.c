int main () {
    int key;
    int number, total;
    while ((cin >> key) && (key != -1)) {
        int num [15];
        num[0] = key;
        int i = 1;
        int flag1 = 0, flag2 = 0;
        total = 0;
        while ((cin >> number) && (number != 0)) {
            num[i] = number;
            i++;
        }
        for (int k = 0;
        k <= i - 2; k++) {
            for (int r = k + 1;
            r <= i - 1; r++) {
                flag1 = (num[r] == 2 * num[k]);
                flag2 = (num[k] == 2 * num[r]);
                if ((flag1 == 1) || (flag2 == 1)) {
                    total = total + 1;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}

