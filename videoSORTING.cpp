#include <stdio.h>
#include <string.h>

FILE *fp;

struct view {
    char title[1001];
    char nama[1001];
    int view;
};

void tukar(struct view *a, struct view *b) {
    struct view temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct view vid[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int isSwapped = 0;

        for (int j = 0; j < size - i - 1; j++) {
            if (vid[j].view < vid[j + 1].view || (vid[j].view == vid[j + 1].view && strcmp(vid[j].title, vid[j + 1].title) > 0)) {
                tukar(&vid[j], &vid[j + 1]);
                isSwapped = 1;
            }
        }

        if (isSwapped == 0) {
            return;
        }
    }
}

int main() {
    struct view vid[101];

    fp = fopen("testdata.in", "r");

    int i = 0;
    while (fscanf(fp, "%[^#]#%[^#]#%d\n", vid[i].title, vid[i].nama, &vid[i].view) == 3) {
        i++;
    }

    int size = i;

    sort(vid, size);

    for (int j = 0; j < size; j++) {
        printf("%s by %s - %d\n", vid[j].title, vid[j].nama, vid[j].view);
    }

    fclose(fp);

    return 0;
}

