int main () {
    char str1 [200], str2 [200] = "", *p, *q, i;
    p = str1;
    q = str2;
    cin.getline (str1, 200);
    for (; *p != '\0'; p++) {
        if (*p == ' ' && *(p - 1) == ' ')
            continue;
        else {
            *q = *p;
            q++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++)
        cout << str2[i];
    cout << endl;
    return 0;
}

