int main (int argc, char *argv []) {
    char zifu [30];
    int i;
    gets (zifu);
    for (i = 0; i < strlen (zifu); i++) {
        if (zifu[i] >= '0' && zifu[i] <= '9') {
            printf ("%c", zifu[i]);
        }
        else {
            if ((zifu[i] < '0' || zifu[i] > '9') && (zifu[i - 1] >= '0' && zifu[i - 1] <= '9')) {
                printf ("\n");
            }
        }
    }
    return 0;
}

