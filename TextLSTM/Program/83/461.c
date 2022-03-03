int main () {
    int n, xuefen [10], defen [10], i = 0;
    float GPA = 0, gpa = 0, fen = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &xuefen[i]);
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &defen[i]);
    }
    for (i = 0; i < n; i++) {
        fen += xuefen[i];
        if (defen[i] >= 90) {
            gpa += 4.0 * xuefen[i];
        }
        else if (defen[i] >= 85 && defen[i] <= 89) {
            gpa += 3.7 * xuefen[i];
        }
        else if (defen[i] >= 82 && defen[i] <= 84) {
            gpa += 3.3 * xuefen[i];
        }
        else if (defen[i] >= 78 && defen[i] <= 81) {
            gpa += 3.0 * xuefen[i];
        }
        else if (defen[i] >= 75 && defen[i] <= 77) {
            gpa += 2.7 * xuefen[i];
        }
        else if (defen[i] >= 72 && defen[i] <= 74) {
            gpa += 2.3 * xuefen[i];
        }
        else if (defen[i] >= 68 && defen[i] <= 71) {
            gpa += 2.0 * xuefen[i];
        }
        else if (defen[i] >= 64 && defen[i] <= 67) {
            gpa += 1.5 * xuefen[i];
        }
        else if (defen[i] >= 60 && defen[i] <= 63) {
            gpa += 1.0 * xuefen[i];
        }
    }
    GPA = gpa / fen;
    printf ("%.2f", GPA);
}

