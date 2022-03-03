int iIndex, iIndex1, iCount;
int i, j, k, l, m, n;
double x [1000];
double y [1000];
double MaxDistance, NowDistance;

void _Calculate () {
    for (i = 0; i < iCount; i++) {
        for (j = i; j < iCount; j++) {
            NowDistance = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if (NowDistance > MaxDistance) {
                MaxDistance = NowDistance;
            }
        }
    }
}

int main (int argc, char *argv []) {
    MaxDistance = -1;
    scanf ("%d", &iCount);
    for (i = 0; i < iCount; i++) {
        cin >> x[i] >> y[i];
    }
    _Calculate ();
    cout << MaxDistance << endl;
    return 0;
}

