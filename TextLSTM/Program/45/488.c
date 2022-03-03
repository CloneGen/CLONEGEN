int main () {
    char s [50], w [50];
    cin >> s >> w;
    int length = strlen (w);
    int length1 = strlen (s);
    int i, j;
    for (i = 0; i < length; i++) {
        if (w[i] == s[0]) {
            for (j = i + 1; j < i + length1; j++) {
                if (w[j] != s[j - i])
                    break;
            }
            if (j == i + length1) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

