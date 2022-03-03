int main () {
    char str1 [101], str2 [101], i, l;
    cin.getline (str1, 101);
    l = strlen (str1);
    for (i = 0; i < l - 1; i++) {
        str2[i] = str1[i] + str1[i + 1];
    }
    str2[l - 1] = str1[0] + str1[l - 1];
    str2[l] = 0;
    cout << str2 << endl;
    return 0;
}

