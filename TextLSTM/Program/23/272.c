int main () {
    int i, j, k = 0, b [100], x = 0, y = 0, z;
    char a [101] [101], s [101];
    cin.getline (s, 101, '\n');
    for (i = 1; i <= 101; i++) {
        for (j = 1; j < 101; j++) {
            if (s[k] == ' ' || s[k] == '\0' || s[k] == '\n') {
                b[i] = x;
                x = 0;
                break;
            }
            else {
                x++;
                a[i][j] = s[k];
                k++;
            }
        }
        y++;
        if (s[k] == '\0' || s[k] == '\n') {
            break;
        }
        k++;
    }
    for (i = y; i >= 1; i--) {
        for (j = 1; j <= b[i]; j++) {
            cout << a[i][j];
        }
        if (i != 1)
            cout << " ";
    }
    return 0;
}

