int main () {
    char str1 [100], str2 [100];
    gets (str1);
    gets (str2);
    int a = strlen (str1), b = strlen (str2), i;
    for (i = 0; i <= a; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            str1[i] -= 32;
        if (str2[i] >= 'a' && str2[i] <= 'z')
            str2[i] -= 32;
        if (str1[i] > str2[i]) {
            cout << '>';
            break;
        }
        else if (str1[i] < str2[i]) {
            cout << '<';
            break;
        }
        else if (str1[i] == str2[i] && i == a) {
            cout << '=';
            break;
        }
        else
            continue;
    }
    return 0;
}

