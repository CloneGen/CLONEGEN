int main () {
    int num [16], i, k, j, count;
    for (;;) {
        i = -1;
        count = 0;
        do {
            i++;
            cin >> num[i];
            if (num[0] == -1)
                return 0;
        }
        while (num[i] != 0);
        for (j = 0; j <= i - 1; j++) {
            for (k = j; k <= i - 1; k++) {
                if ((num[j] == 2 * num[k]) || (num[j] * 2 == num[k]))
                    count++;
            }
        }
        cout << count << endl;
    }
}

