int main () {
    char str1 [101], str2 [101];
    int i, len;
    cin.getline (str1, 101);
    len = strlen (str1);
    for (i = 0; i <= len - 2; i++)
        str2[i] = str1[i] + str1[i + 1];
    str2[len - 1] = str1[len - 1] + str1[0];
    str2[len] = '\0';
    for (i = 0; str2[i] != 0; i++)
        cout << str2[i];
    cout << endl;
    return 0;
}

