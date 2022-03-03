int main () {
    char a [500];
    cin >> a;
    int L;
    for (int i = 0;
    i < 500; i++) {
        if (a[i] == 0) {
            L = i;
            break;
        }
    }
    for (int i = 1;
    i < L -1; i++)
        for (int j = 0;
        j < L -i; j++) {
            int flag = 1;
            for (int k = 0;
            k < 1 + i / 2; k++) {
                if (a[j + k] != a[j + i - k])
                    flag = 0;
            }
            if (flag == 1) {
                for (int k = 0;
                k <= i; k++)
                    cout << a[j + k];
                cout << endl;
            }
        }
    return 0;
}

