int main () {
    int i, m = 0;
    char c [1000], jg [1000];
    cin.getline (c, 1000);
    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] != ' ') {
            jg[m] = c[i];
            m++;
        }
        else if (c[i] == ' ' && c[i + 1] != ' ') {
            jg[m] = c[i];
            m++;
        }
    }
    jg[m] = '\0';
    int t = strlen (jg);
    for (m = 0; m < t; m++) {
        cout << jg[m];
    }
    return 0;
}

