int main () {
    char str [100];
    int i, j;
    cin.get (str, 100);
    for (i = 0; i < 100; i++) {
        if (str[i] == 32 && str[i + 1] == 32) {
            for (j = i + 1; j < 100; j++) {
                str[j] = str[j + 1];
            }
            i = i - 1;
        }
    }
    cout << str;
    return 0;
}

