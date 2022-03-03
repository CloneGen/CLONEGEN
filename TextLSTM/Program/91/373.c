int main () {
    char str [1000] = {0}, str1 [1000];
    char *s = str, *s1 = str1;
    cin.getline (str, 1000);
    char b = str[0];
    while (*(s + 1)) {
        *s1 = *s + *(s + 1);
        cout << *s1;
        s++;
        s1++;
    }
    *s1 = *s + b;
    cout << *s1 << endl;
    return 0;
}

