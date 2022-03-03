int main () {
    char str1 [81], str2 [81], i;
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = 0; i < strlen (str1); i++)
        if (str1[i] < 91)
            str1[i] = str1[i] + 32;
    for (i = 0; i < strlen (str2); i++)
        if (str2[i] < 91)
            str2[i] = str2[i] + 32;
    switch (strcmp (str1, str2)) {
    case (1) :
        cout << '>';
        break;
    case (0) :
        cout << '=';
        break;
    default :
        cout << '<';
    }
    return 0;
}

