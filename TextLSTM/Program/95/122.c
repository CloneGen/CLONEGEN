int main () {
    int i, k;
    char str1 [81], str2 [81];
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = 0; i < 81; i++)
        if ((str1[i] > 64) && (str1[i] < 91))
            str1[i] = str1[i] + 32;
    for (i = 0; i < 81; i++)
        if ((str2[i] > 64) && (str2[i] < 91))
            str2[i] = str2[i] + 32;
    k = strcmp (str1, str2);
    switch (k) {
    case -1 :
        cout << '<';
        break;
    case 0 :
        cout << '=';
        break;
    case 1 :
        cout << '>';
        break;
    }
    return 0;
}

