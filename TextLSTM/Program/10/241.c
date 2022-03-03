enum {MAX_NUM = 25};

int main () {
    int missle_num = 0;
    int height [MAX_NUM] [2];
    int i, j;
    int max = 0;
    scanf ("%d", &missle_num);
    for (i = 0; i < missle_num; i++) {
        scanf ("%d", &height[i][0]);
        height[i][1] = 1;
    }
    for (i = 0; i < missle_num; i++) {
    }
    for (i = 0; i < missle_num; i++) {
        for (j = i - 1; j >= 0; j--) {
            if (height[i][0] <= height[j][0]) {
                if (height[i][1] < height[j][1] + 1) {
                    height[i][1] = height[j][1] + 1;
                }
            }
        }
    }
    max = 0;
    for (i = 0; i < missle_num; i++) {
        if (max < height[i][1]) {
            max = height[i][1];
        }
    }
    printf ("\n%d\n", max);
    return 0;
}

