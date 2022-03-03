int main () {
    int n;
    char words [1000] [42];
    char (*p) [42];
    int sum = 0, len1 = 0, len2 = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        scanf ("%s", words[i]);
    }
    p = words;
    int i = 0;
    while (sum <= 80 && i < n) {
        len1 = strlen (words[i]);
        len2 = strlen (words[i + 1]);
        if ((sum + len1) <= 80 && (sum + len1 + 1 + len2) > 80) {
            cout << *p << endl;
            p++;
            i++;
            sum = 0;
        }
        else if ((sum + len1) < 80 && (sum + len1 + 1 + len2) <= 80) {
            if (i != n - 1) {
                cout << *p << " ";
                p++;
                sum = sum + len1 + 1;
                i++;
            }
            else {
                cout << *p;
                break;
            }
        }
    }
    return 0;
}

