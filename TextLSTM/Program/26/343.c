int main () {
    char str [99];
    gets (str);
    for (int i = 0;
    i < strlen (str); i++)
        if (str[i] == 32)
            while (str[i + 1] == 32)
                for (int k = i + 1;
                k < strlen (str); k++)
                    str[k] = str[k + 1];
    cout << str;
    return 0;
}

