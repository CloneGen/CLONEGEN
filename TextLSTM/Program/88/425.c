void TiquShuzi (char *str) {
    int k = 0;
    if (*str > 47 && *str < 58)
        cout << *str;
    for (char *p = str + 1;
    *p != '\0'; p++) {
        if (*p > 47 && *p < 58) {
            cout << *p;
            k = 0;
        }
        else {
            if (k == 0)
                cout << endl;
            k += 1;
        }
    }
}

int main () {
    char str [50];
    cin.getline (str, sizeof (str));
    TiquShuzi (str);
    return 0;
}

