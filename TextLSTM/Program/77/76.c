int main () {
    int i = 0, j, d [1000], total, temp;
    char c [1000];
    while (cin >> c[i]) {
        i++;
        d[i] = 0;
    }
    total = i;
    for (i = 0; i < (total / 2); i++) {
        for (j = 0; j < total; j++) {
            if (d[j] == 0) {
                if (c[j] == c[total - 1]) {
                    temp = j;
                    d[j] = 1;
                    do {
                        j--;
                    }
                    while (d[j] == 1);
                    cout << j << " " << temp << endl;
                    d[j] = 1;
                    break;
                }
            }
        }
    }
    return 0;
}

