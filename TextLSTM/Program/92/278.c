int main () {
    int n, i, j, temp, r = 0, thead, ttail, khead, ktail;
    int vtj [1100], vqw [1100];
    while (1) {
        r = 0;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
            scanf ("%d", &vtj[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &vqw[i]);
        for (i = 0; i < n; i++)
            for (j = i; j < n; j++) {
                if (vqw[j] > vqw[i]) {
                    temp = vqw[i];
                    vqw[i] = vqw[j];
                    vqw[j] = temp;
                }
                if (vtj[j] > vtj[i]) {
                    temp = vtj[i];
                    vtj[i] = vtj[j];
                    vtj[j] = temp;
                }
            }
        ttail = ktail = n - 1;
        thead = khead = 0;
        while (ttail >= thead) {
            if (vtj[ttail] > vqw[ktail]) {
                ttail--;
                ktail--;
                r += 200;
                continue;
            }
            else if (vtj[ttail] < vqw[ktail]) {
                r -= 200;
                ttail--;
                khead++;
                continue;
            }
            else {
                if (vtj[thead] > vqw[khead]) {
                    r += 200;
                    thead++;
                    khead++;
                }
                else if (vtj[thead] < vqw[khead]) {
                    r -= 200;
                    ttail--;
                    khead++;
                }
                else {
                    if (vtj[ttail] < vqw[khead]) {
                        r -= 200;
                        ttail--;
                        khead++;
                    }
                    else {
                        ttail--;
                        khead++;
                    }
                }
                continue;
            }
        }
        printf ("%d\n", r);
    }
    getchar ();
    getchar ();
}

