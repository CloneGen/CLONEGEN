int main () {
    int n [10], score [10];
    int k, i, m;
    double jd [10];
    double a, sum;
    m = 0;
    sum = 0.0;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d", &n[i]);
        m += n[i];
    }
    i = 0;
    while (i < k) {
        scanf ("%d", &score[i]);
        if (score[i] >= 90) {
            jd[i] = 4.0;
        }
        else {
            if ((score[i] >= 85) && (score[i] < 90)) {
                jd[i] = 3.7;
            }
            else {
                if ((score[i] >= 82) && (score[i] < 85)) {
                    jd[i] = 3.3;
                }
                else {
                    if ((score[i] >= 78) && (score[i] < 82)) {
                        jd[i] = 3.0;
                    }
                    else {
                        if ((score[i] >= 75) && (score[i] < 78)) {
                            jd[i] = 2.7;
                        }
                        else {
                            if ((score[i] >= 72) && (score[i] < 75)) {
                                jd[i] = 2.3;
                            }
                            else {
                                if ((score[i] >= 68) && (score[i] < 72)) {
                                    jd[i] = 2.0;
                                }
                                else {
                                    if ((score[i] >= 64) && (score[i] < 68)) {
                                        jd[i] = 1.5;
                                    }
                                    else {
                                        if ((score[i] >= 60) && (score[i] < 64)) {
                                            jd[i] = 1.0;
                                        }
                                        else {
                                            jd[i] = 0.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        sum += (jd [i]) *(n[i]);
        i++;
    }
    a = sum / ((double) (m));
    printf ("%.2lf", a);
    return 0;
}

