int main () {
    int a [16], whether, number = 0, numofpairs = 0;
    do {
        for (int i = 0;
        i < 16; i++) {
            cin >> a[i];
            if (a[i] == -1) {
                whether = 0;
                break;
            }
            else if (a[i] == 0) {
                whether = 1;
                break;
            }
            number++;
        }
        if (whether) {
            for (int j = 0;
            j < number; j++) {
                for (int k = 0;
                k < number; k++) {
                    if (a[k] == 2 * a[j])
                        numofpairs++;
                }
            }
            cout << numofpairs << endl;
        }
        numofpairs = 0;
        number = 0;
    }
    while (whether == 1);
    return 0;
}

