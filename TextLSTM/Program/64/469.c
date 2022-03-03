struct  point {
    int x;
    int y;
    int z;
}
p [10];
struct  distance {
    int f;
    int b;
    double s;
}
a [45];

int main () {
    int n, i, j, k = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y >> p[i].z;
    }
    int m = n * (n - 1) / 2;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            a[k].s = sqrt ((p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y) + (p[i].z - p[j].z) * (p[i].z - p[j].z));
            a[k].f = i;
            a[k].b = j;
            k++;
        }
    }
    for (i = 0; i < m; i++) {
        k = i;
        for (j = i + 1; j < m; j++) {
            if (a[k].s < a[j].s) {
                k = j;
            }
            else {
                if (a[k].s == a[j].s) {
                    if ((a[k].f > a[j].f) || ((a[k].f == a[j].f) && (a[k].b > a[j].b))) {
                        k = j;
                    }
                }
            }
        }
        cout << "(" << p[a[k].f].x << "," << p[a[k].f].y << "," << p[a[k].f].z << ")-";
        cout << "(" << p[a[k].b].x << "," << p[a[k].b].y << "," << p[a[k].b].z << ")=";
        cout << setprecision (2) << fixed << a[k].s << endl;
        a[k] = a[i];
    }
    return 0;
}

