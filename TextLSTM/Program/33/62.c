int main () {
    int n, i, j;
    scanf ("%d", &n);
    char jianji [1000] [256];
    for (i = 0; i < n; i++) {
        scanf ("%s", jianji[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < 255; j++) {
            switch (jianji[i][j]) {
            case 'A' :
                jianji[i][j] = 'T';
                break;
            case 'T' :
                jianji[i][j] = 'A';
                break;
            case 'C' :
                jianji[i][j] = 'G';
                break;
            case 'G' :
                jianji[i][j] = 'C';
                break;
            case '\0' :
                break;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", jianji[i]);
    }
    return 0;
}

