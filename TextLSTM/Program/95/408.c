int main () {
    char c1 [80], c2 [80];
    int len1, len2, i, k = 0;
    cin.getline (c1, 80);
    cin.getline (c2, 80);
    len1 = strlen (c1);
    len2 = strlen (c2);
    if (len1 != len2) {
        if (strcmp (c1, c2) == 0)
            cout << "=";
        else if (strcmp (c1, c2) == 1)
            cout << ">";
        else
            cout << "<";
    }
    else {
        for (i = 0; i < len1; i++) {
            if (c1[i] == c2[i] || c1[i] == c2[i] + 32 || c1[i] == c2[i] - 32) {
                k++;
                continue;
            }
            else if (((c1[i] > 64 && c1[i] < 91) && (c2[i] > 64 && c2[i] < 91)) || ((c1[i] > 96 && c1[i] < 123) && (c2[i] > 96 && c2[i] < 123))) {
                if (c1[i] < c2[i])
                    cout << "<";
                else
                    cout << ">";
            }
            else if ((c1[i] > 64 && c1[i] < 91) && (c2[i] > 96 && c2[i] < 123)) {
                if (c1[i] + 32 < c2[i])
                    cout << "<";
                else if (c1[i] + 32 > c2[i])
                    cout << ">";
            }
            else if ((c1[i] > 96 && c1[i] < 123) && (c2[i] > 64 && c2[i] < 91)) {
                if (c1[i] - 32 < c2[i])
                    cout << "<";
                else if (c1[i] - 32 > c2[i])
                    cout << ">";
            }
        }
        if (k == len1)
            cout << "=" << endl;
    }
    return 0;
}

