int main () {
    char str1 [102], *p = NULL, temp;
    cin.getline (str1, 102);
    p = str1;
    int l = strlen (str1);
    str1[l] = str1[0];
    for (; *p != '\0'; p++) {
        temp = *p;
        *p = temp + *(p + 1);
    }
    str1[l] = '\0';
    cout << str1;
    return 0;
}

