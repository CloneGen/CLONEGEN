int main () {
    int i, j;
    char s [100], a [100], b [100];
    cin.getline (s, 100);
    cin.getline (a, 100);
    cin.getline (b, 100);
    for (i = 0, j = 0; s[i] != '\0';) {
        if (s[i + j] == a[j] && (s[i - 1] == ' ' || i == 0))
            j++;
        else {
            cout << s[i];
            i++;
            j = 0;
        }
        if (a[j] == '\0' && (s[i + j] == ' ' || s[i + j] == '\0')) {
            cout << b;
            i += j;
            j = 0;
        }
    }
    return 0;
}

