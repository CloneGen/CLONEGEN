int main () {
    int i, j, len, sp;
    char str [31];
    memset (str, '\0', sizeof str);
    cin.getline (str, 31);
    len = strlen (str);
    for (i = 0; i < len; i++) {
        if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] < '0' || str[i + 1] > '9'))
            cout << str[i] << endl;
        else if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] >= '0' || str[i + 1] <= '9'))
            cout << str[i];
        else
            continue;
    }
    return 0;
}

