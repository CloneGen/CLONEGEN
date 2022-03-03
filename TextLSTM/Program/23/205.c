int main () {
    char a [100] = " ";
    int b [100] = {0};
    int s = 1;
    gets (a);
    for (int i = 0;
    i < 100; i++) {
        if (a[i] == ' ') {
            s++;
        }
        else if (((a[i] >= 'a') && (a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z'))) {
            b[i] = s;
        }
    }
    while (s) {
        for (int i = 0;
        i < 100; i++) {
            if (b[i] == s) {
                cout << a[i];
            }
        }
        s--;
        if (s != 0) {
            cout << ' ';
        }
    }
    return 0;
}

