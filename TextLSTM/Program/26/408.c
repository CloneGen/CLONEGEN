int main () {
    char str [101];
    cin.getline (str, 101);
    int len;
    len = strlen (str);
    for (int i = 0;
    i <= len; i++)
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (int j = i + 1;
            j < len; j++)
                str[j] = str[j + 1];
            i = i - 1;
        }
    cout << str << endl;
    return 0;
}

