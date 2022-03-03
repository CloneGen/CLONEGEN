int main () {
    int n, i, j;
    char **string;
    scanf ("%d", &n);
    string = (char **) malloc (sizeof (char *) * n);
    for (i = 0; i < n; i++) {
        string[i] = (char *) malloc (sizeof (char) * 20);
        scanf ("%s", string[i]);
    }
    for (i = 0; i < n; i++) {
        if (!((string[i][0] >= 'A' && string[i][0] <= 'Z') || (string[i][0] >= 'a' && string[i][0] <= 'z') || string[i][0] == '_')) {
            printf ("no\n");
            continue;
        }
        for (j = 1; string[i][j]; j++) {
            if (!((string[i][j] >= '0' && string[i][j] <= '9') || (string[i][j] >= 'A' && string[i][j] <= 'Z') || (string[i][j] >= 'a' && string[i][j] <= 'z') || string[i][j] == '_')) {
                j = 0;
                break;
            }
        }
        if (j)
            printf ("yes\n");
        else
            printf ("no\n");
    }
    for (i = 0; i < n; i++)
        free (string[i]);
    free (string);
    return 0;
}

