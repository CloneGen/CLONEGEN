int main () {
    int i = 0, j, s, m;
    char c [31];
    cin.getline (c, 31);
    m = strlen (c);
    for (i = 0; i < m; i++) {
        if (c[i] >= '0' && c[i] <= '9') {
            for (j = i; j < m; j++) {
                if (j + 1 <= m && (c[j] >= '0' && c[j] <= '9') && (c[j + 1] < '0' || c[j + 1] > '9')) {
                    for (s = i; s <= j; s++)
                        cout << c[s];
                    cout << endl;
                    i = j + 1;
                    break;
                }
                if (j == m && (c[j] >= '0' && c[j] <= '9')) {
                    for (s = i; s <= j; s++)
                        cout << c[s];
                    cout << endl;
                    i = m;
                    break;
                }
            }
        }
    }
    return 0;
}

