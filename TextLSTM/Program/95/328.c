int main () {
    char str1 [80], str2 [80];
    int x = 0, i;
    cin.getline (str1, 80);
    cin.getline (str2, 80);
    for (i = 0; i <= 79; i++) {
        if (str1[i] >= 97)
            str1[i] = str1[i] - 32;
        if (str2[i] >= 97)
            str2[i] = str2[i] - 32;
    }
    x = strcmp (str1, str2);
    if (x == 1)
        cout << ">" << endl;
    if (x == 0)
        cout << "=" << endl;
    if (x == -1)
        cout << "<" << endl;
    return 0;
}

