#include <stdio.h>

typedef struct {
    int id;
    int type;  // 1 = Circle, 2 = Rectangle, 3 = Cube
    float d1, d2, d3;
} Shape;

Shape shapes[100];
int cnt = 0;

void circ() {
    float d;
    printf("Enter diameter: ");
    scanf("%f", &d);
    shapes[cnt].id = cnt + 1;
    shapes[cnt].type = 1;
    shapes[cnt].d1 = d;
    shapes[cnt].d2 = 0;
    shapes[cnt].d3 = 0;
    cnt++;
}

void rect() {
    float h, w;
    printf("Enter height and width: ");
    scanf("%f %f", &h, &w);
    shapes[cnt].id = cnt + 1;
    shapes[cnt].type = 2;
    shapes[cnt].d1 = h;
    shapes[cnt].d2 = w;
    shapes[cnt].d3 = 0;
    cnt++;
}

void cubo() {
    float d, e, f;
    printf("Enter height, width, and depth: ");
    scanf("%f %f %f", &d, &e, &f);
    shapes[cnt].id = cnt + 1;
    shapes[cnt].type = 3;
    shapes[cnt].d1 = d;
    shapes[cnt].d2 = e;
    shapes[cnt].d3 = f;
    cnt++;
}

void listo() {
    printf("\nID   TYPE        DIMENSION\n");
    for (int i = 0; i < cnt; i++) {
        printf("%-4d ", shapes[i].id);
        if (shapes[i].type == 1)
            printf("Circle      %.0f\n", shapes[i].d1);
        else if (shapes[i].type == 3)
            printf("Cube        %.0f*%.0f*%.0f\n", shapes[i].d1, shapes[i].d2, shapes[i].d3);
        else
            printf("Rectangle   %.0f*%.0f\n", shapes[i].d1, shapes[i].d2);
    }
}

void stat() {
    int cir = 0, rect = 0, cubb = 0;
    float crrrrarea = 0, rectarea = 0, cubearea = 0, ttareo = 0;

    for (int i = 0; i < cnt; i++) {
        if (shapes[i].type == 1) {
            cir++;
            float r = shapes[i].d1 / 2;
            float area = 3.1416f * r * r;
            crrrrarea += area;
            ttareo += area;
        } else if (shapes[i].type == 3) {
            cubb++;
            float area = shapes[i].d1 * shapes[i].d2 * shapes[i].d3;
            cubearea += area;
            ttareo += area;
        } else {
            rect++;
            float area = shapes[i].d1 * shapes[i].d2;
            rectarea += area;
            ttareo += area;
        }
    }

    if (ttareo == 0) {
        printf("No shapes added yet. Cannot calculate statistics.\n");
        return;
    }

    printf("\nTotal shapes: %d\n", cnt);
    printf("Total number of Circles: %d\n", cir);
    printf("Total number of Rectangles: %d\n", rect);
    printf("Total number of Cubes: %d\n", cubb);
    printf("Total area: %.2f\n", ttareo);
    printf("Area by circles: %.2f (%.2f%%)\n", crrrrarea, (crrrrarea / ttareo) * 100);
    printf("Area by rectangles: %.2f (%.2f%%)\n", rectarea, (rectarea / ttareo) * 100);
    printf("Area by cubes: %.2f (%.2f%%)\n", cubearea, (cubearea / ttareo) * 100);
}

int main() {
    int c;
    while (1) {
        printf("\nWarehouse Management System\n");
        printf("1. Add a circle\n");
        printf("2. Add a rectangle\n");
        printf("3. Add a cube\n");
        printf("4. List items\n");
        printf("5. Get statistics\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &c);

        switch (c) {
            case 1: circ(); break;
            case 2: rect(); break;
            case 3: cubo(); break;
            case 4: listo(); break;
            case 5: stat(); break;
            case 6: return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
