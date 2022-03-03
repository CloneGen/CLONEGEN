char *str_replace (const  char *src, const  char *oldstr, const  char *newstr);

int main () {
    int aa = 0, i;
    char str1 [100], str2 [100], str3 [100], sub [100] = {0}, sub1 [100] = {0}, sub2 [100] = {0};
    gets (str1);
    gets (str2);
    gets (str3);
    if (strlen (str1) < strlen (str2))
        cout << str1;
    else {
        for (i = 0; i <= strlen (str1) - strlen (str2); i++) {
            strncpy (sub, str1 + i, strlen (str2));
            if (strcmp (sub, str2) == 0) {
                strncpy (sub1, str1, i);
                strncpy (sub2, str1 + i + strlen (str2), strlen (str1) - i - strlen (str2));
                strcat (sub1, str3);
                strcat (sub1, sub2);
                cout << sub1;
                aa = 1;
                break;
            }
        }
        if (aa == 0)
            cout << str1;
    }
    return 0;
}

char *str_replace (const  char *src, const  char *oldstr, const  char *newstr) {
    if (NULL == src || NULL == oldstr || NULL == newstr) {
        return NULL;
    }
    char *dest = strdup (src);
    if (strcmp (oldstr, newstr) == 0) {
        return dest;
    }
    char *needle;
    char *tmp, *dest_tmp = dest;
    while (needle = strstr (dest, oldstr)) {
        tmp = (char *) malloc (strlen (dest) + strlen (newstr) - strlen (oldstr) + 1);
        strncpy (tmp, dest, needle - dest);
        tmp[needle - dest] = '\0';
        strcat (tmp, newstr);
        strcat (tmp, needle + strlen (oldstr));
        dest = strdup (tmp);
        free (dest_tmp);
        free (tmp);
        dest_tmp = dest;
    }
    return dest;
}

