void JIAOGU (int NUM) {
    int NEXT;
    if (NUM == 1) {
        printf ("End");
        return;
    }
    else if (NUM % 2 == 1) {
        NEXT = 3 * NUM +1;
        printf ("%d*3+1=%d\n", NUM, NEXT);
        JIAOGU (NEXT);
    }
    else {
        NEXT = NUM / 2;
        printf ("%d/2=%d\n", NUM, NEXT);
        JIAOGU (NEXT);
    }
}

int main () {
    int NUM;
    cin >> NUM;
    JIAOGU (NUM);
    return 0;
}

