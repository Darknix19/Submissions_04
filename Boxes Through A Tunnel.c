#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
    return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) {
    return b.height < MAX_HEIGHT;
}

int main() {
    int n;
    scanf("%d", &n);
    box b;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &b.length, &b.width, &b.height);
        if (is_lower_than_max_height(b)) {
            printf("%d\n", get_volume(b));
        }
    }
    return 0;
}
