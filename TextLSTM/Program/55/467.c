int main () {
    char str1 [200];
    char stdard [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i, j, l1, l2, l3, r, str2 [200];
    double a, b, medium = 0.0;
    cin >> a >> str1 >> b;
    l1 = strlen (str1);
    for (i = 0; i < l1; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            str1[i] -= 'a' - 'A';
    }
    j = 0;
    for (i = l1 - 1; i >= 0; i--)
        str2[j++] = str1[i];
    for (i = 0; i < l1; i++) {
        for (j = 0; j < 36; j++) {
            if (str2[i] == stdard[j])
                medium += j * pow (a, i);
        }
    }
    j = 0;
    while ((int) medium >= (int) b) {
        str2[j++] = (int) medium % (int) b;
        medium = (int) medium / (int) b;
    }
    str2[j] = (int) medium;
    for (; j >= 0; j--)
        cout << stdard[str2[j]];
    cout << endl;
    return 0;
}

