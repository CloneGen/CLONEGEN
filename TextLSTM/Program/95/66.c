int main () {
    char str1 [81] = {"0"};
    char str2 [81] = {"0"};
    unsigned int i, m, k = 0;
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = 0; i < (strlen (str1)); i++) {
        if (str1[i] < 'a')
            str1[i] = str1[i] + 32;
    }
    for (i = 0; i < (strlen (str2)); i++) {
        if (str2[i] < 'a')
            str2[i] = str2[i] + 32;
    }
    if (strlen (str1) > strlen (str2))
        m = strlen (str1);
    else
        m = strlen (str2);
    for (i = 0; i < m; i++) {
        if (str1[i] > str2[i]) {
            cout << ">" << endl;
            k++;
            break;
        }
        if (str1[i] < str2[i]) {
            cout << "<" << endl;
            k++;
            break;
        }
    }
    if (k == 0)
        cout << "=" << endl;
    return 0;
}

