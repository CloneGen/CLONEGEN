void main () {
    char str [101], fri [101], *pca, *pcb;
    int n, i;
    gets (str);
    n = strlen (str);
    for (pca = fri; pca <= (fri + n); pca++)
        *pca = '\0';
    if (n >= 2 && n <= 100) {
        for (pca = str, pcb = str + 1, i = 0; pca < (str + n - 1); pca++, pcb++, i++)
            fri[i] = *pca + *pcb;
        fri[n - 1] = str[0] + str[n - 1];
        printf ("%s\n", fri);
    }
}

