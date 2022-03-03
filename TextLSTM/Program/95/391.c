int main () {
    int i;
    char str1 [80], str2 [80];
    cin.getline (str1, 80);
    cin.getline (str2, 80);
    for (i = 0; i <= 80; i++) {
        if (96 < str1[i] && str1[i] < 123)
            str1[i] = str1[i] - 32;
        if (96 < str2[i] && str2[i] < 123)
            str2[i] = str2[i] - 32;
    }
    i = strcmp (str1, str2);
    if (i == 1)
        cout << ">" << endl;
    if (i == 0)
        cout << "=" << endl;
    if (i == -1)
        cout << "<" << endl;
    return 0;
}

