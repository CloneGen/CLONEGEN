int main () {
    int i = 0, k = 0, t, a;
    char string [100000], b [26];
    for (i = 0; i < 26; i++) {
        b[i] = 97 + i;
    }
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> string;
        int count [26] = {0}, p = 0, flag = 0;
        for (k = 0; k < 100; k++) {
            if (string[k] != '\0')
                p = k;
            else
                break;
        }
        p++;
        for (k = 0; k < p; k++) {
            for (int j = 0;
            j < 26; j++) {
                if (string[k] == b[j]) {
                    count[j]++;
                    break;
                }
            }
        }
        for (k = 0; k < 26; k++) {
            if (count[k] == 1) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            for (k = 0; k < p; k++) {
                for (int j = 0;
                j < 26; j++) {
                    if (string[k] == b[j]) {
                        a = j;
                        break;
                    }
                }
                if (count[a] == 1) {
                    cout << string[k] << endl;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "no" << endl;
    }
    return 0;
}

