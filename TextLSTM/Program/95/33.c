int main () {
    int i;
    char str1 [81], str2 [82];
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = 0; i < 80; i++) {
        if ((int) str1[i] >= 65 && (int) str1[i] <= 90)
            str1[i] = str1[i] + 32;
        if ((int) str2[i] >= 65 && (int) str2[i] <= 90)
            str2[i] = str2[i] + 32;
    }
    if (strcmp (str1, str2) == 0)
        cout << '=';
    else if (strcmp (str1, str2) < 0)
        cout << '<';
    else
        cout << '>';
    return 0;
}

