void main () {
    int lenstr, lensub, lenrpl, i, j;
    char temp [260], str [260], sub [260], rpl [260];
    scanf ("%s %s %s", &str, &sub, &rpl);
    lenstr = strlen (str);
    lensub = strlen (sub);
    lenrpl = strlen (rpl);
    str[lenstr] = '\0';
    sub[lensub] = '\0';
    rpl[lenrpl] = '\0';
    for (i = 0; i < lenstr - lensub + 1; i++) {
        for (j = 0; j < lensub; j++)
            temp[j] = str[i + j];
        temp[j] = '\0';
        if (strcmp (temp, sub) == 0)
            break;
    }
    if (i != lenstr - lensub + 1) {
        for (j = 0; j < lenrpl; j++)
            str[i + j] = rpl[j];
    }
    printf ("%s\n", str);
}

