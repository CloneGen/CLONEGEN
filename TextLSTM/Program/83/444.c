int main () {
    int n, i;
    float GPA, total = 0.0, xuefen [20], score [20], zongfen = 0.0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%f", &xuefen[i]);
        zongfen = zongfen + xuefen[i];
    }
    for (i = 0; i < n; i++) {
        scanf ("%f", &score[i]);
    }
    for (i = 0; i < n; i++) {
        if (score[i] >= 90 && score[i] <= 100) {
            score[i] = 4.0;
            continue;
        }
        if (score[i] >= 85 && score[i] <= 89) {
            score[i] = (float) 3.7;
            continue;
        }
        if (score[i] >= 82 && score[i] <= 84) {
            score[i] = (float) 3.3;
            continue;
        }
        if (score[i] >= 78 && score[i] <= 81) {
            score[i] = 3.0;
            continue;
        }
        if (score[i] >= 75 && score[i] <= 77) {
            score[i] = (float) 2.7;
            continue;
        }
        if (score[i] >= 72 && score[i] <= 74) {
            score[i] = (float) 2.3;
            continue;
        }
        if (score[i] >= 68 && score[i] <= 71) {
            score[i] = 2.0;
            continue;
        }
        if (score[i] >= 64 && score[i] <= 67) {
            score[i] = 1.5;
            continue;
        }
        if (score[i] >= 60 && score[i] <= 63) {
            score[i] = 1.0;
            continue;
        }
        if (score[i] < 60) {
            score[i] = 0.0;
            continue;
        }
    }
    for (i = 0; i < n; i++) {
        total = score[i] * xuefen[i] + total;
    }
    GPA = total / zongfen;
    printf ("%.2f\n", GPA);
    return 0;
}

