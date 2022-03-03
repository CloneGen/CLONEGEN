int main () {
    char a [100];
    gets (a);
    int len = strlen (a), kk = 0;
    for (int i = 0;
    i < len; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            cout << a[i];
            kk = 0;
        }
        else if (kk == 0) {
            kk++;
            cout << endl;
        }
    }
    return 0;
}

