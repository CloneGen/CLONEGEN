int main (int argc, char *argv []) {
    char sz [31];
    int i;
    gets (sz);
    for (i = 0; i < 30; i++) {
        if (sz[i] == '1' || sz[i] == '2' || sz[i] == '3' || sz[i] == '4' || sz[i] == '5' || sz[i] == '6' || sz[i] == '7' || sz[i] == '8' || sz[i] == '9' || sz[i] == '0') {
            printf ("%c", sz[i]);
            continue;
        }
        else {
            if (i == 0) {
                continue;
            }
            if (sz[i - 1] == '1' || sz[i - 1] == '2' || sz[i - 1] == '3' || sz[i - 1] == '4' || sz[i - 1] == '5' || sz[i - 1] == '6' || sz[i - 1] == '7' || sz[i - 1] == '8' || sz[i - 1] == '9' || sz[i - 1] == '0') {
                printf ("\n");
            }
        }
    }
    return 0;
}

