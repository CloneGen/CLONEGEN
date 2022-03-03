int main () {
    char *p1, *p2, str1 [101], str2 [101];
    cin.getline (str1, 101);
    int flag = 0;
    for (p1 = str1, p2 = str2; *p1 != '\0'; p1++, p2++) {
        *p2 = *p1;
        if (*p1 == ' ') {
            flag++;
            if (flag > 1)
                p2--;
        }
        else
            flag = 0;
    }
    *p2 = '\0';
    cout << str2 << endl;
    return 0;
}

