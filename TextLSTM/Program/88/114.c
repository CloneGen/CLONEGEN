int main () {
    char str [31], *p [20], *q;
    int i, j, l;
    cin.getline (str, 31);
    l = strlen (str);
    i = 0;
    for (q = str; *q != '\0'; q++) {
        if (*q >= '0' && *q <= '9') {
            p[i++] = q;
            for (p[i] = q + 1; p[i] <= str + l; p[i]++)
                if (*p[i] < '0' || *p[i] > '9') {
                    q += p[i] - p[i - 1];
                    i++;
                    break;
                }
        }
    }
    for (j = 0; j < i; j = j + 2) {
        for (q = p[j]; q < p[j + 1]; q++)
            cout << *q;
        cout << endl;
    }
    return 0;
}

