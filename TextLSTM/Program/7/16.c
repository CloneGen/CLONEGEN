int main () {
    char str [260], subStr [260], replace [260], str2 [260];
    char *start = str, *node = NULL, *rep = replace;
    int len, i = 0;
    cin >> str >> subStr >> replace;
    node = strstr (str, subStr);
    if (node == NULL)
        cout << str;
    else {
        while (start != node)
            str2[i++] = *start++;
        while (*rep != '\0')
            str2[i++] = *rep++;
        node += strlen (subStr);
        while (*node != '\0')
            str2[i++] = *node++;
        str2[i] = '\0';
        cout << str2;
    }
    cout << endl;
    start = NULL;
    node = NULL;
    rep = NULL;
    return 0;
}

