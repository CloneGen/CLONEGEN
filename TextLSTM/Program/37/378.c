int main () {
    char word [100000], l [1];
    char y [10000];
    int n = 0, q, i = 0, j = 0, k = 0, fei = 0, x;
    cin >> n;
    for (q = 0; q < n; q++) {
        cin >> word;
        x = strlen (word);
        for (j = 0; j < x; j++) {
            fei = 0;
            for (k = 0; k < x; k++) {
                if (word[j] == word[k]) {
                    fei++;
                }
            }
            if (fei == 1) {
                y[q] = word[j];
                break;
            }
        }
        if (fei != 1)
            y[q] = 96;
    }
    for (q = 0; q < n; q++) {
        if (y[q] == 96)
            cout << "no" << endl;
        else
            cout << y[q] << endl;
    }
    return 0;
}

