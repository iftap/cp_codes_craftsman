#include <stdio.h>
#include <string.h>


typedef struct {
    int id;
    int type; 
    float d1;
    float d2; 
} Shape;

Shape shapes[100];
int cnt = 0;


void circ() {
    cnt++;
    float d;
    printf("Enter diameter: ");
    scanf("%f", &d);
    shapes[cnt].id = cnt + 1;
    shapes[cnt].type = 1;
    shapes[cnt].d1 = d;
    shapes[cnt].d2 = 0;
   
}


void rect() {
    cnt++;
    float h, w;
    printf("Enter height and width: ");
    scanf("%f %f", &h, &w);
    shapes[cnt].id = cnt + 1;
    shapes[cnt].type = 2;
    shapes[cnt].d1 = h;
    shapes[cnt].d2 = w;
    
}


void listo() {
    printf("\nID   TYPE        DIMENSION\n");
    for (int i = 1; i <= cnt; i++) {
        printf("%-4d ", shapes[i].id);
        if (shapes[i].type == 1) {
            printf("Circle      %.0f\n", shapes[i].d1);
        } else {
            printf("Rectangle   %.0f*%.0f\n", shapes[i].d1, shapes[i].d2);
        }
    }
}


void showStats() {
    int cir = 0, rect = 0;
    float circleArea = 0, rectArea = 0, totalArea = 0;

    for (int i = 0; i < cnt; i++) {
        if (shapes[i].type == 1) {
            cir++;
            float r = shapes[i].d1 / 2;
            float area = 3.1416 * r * r;
            circleArea += area;
            totalArea += area;
        } else {
            rect++;
            float area = shapes[i].d1 * shapes[i].d2;
            rectArea += area;
            totalArea += area;
        }
    }

    printf("\nTotal shapes: %d\n", cnt);
    printf("Total number of Circles: %d\n", cir);
    printf("Total number of Rectangles: %d\n", rect);
    printf("Total area: %.2f\n", totalArea);
    printf("Area by circles: %.2f (%.2f%%)\n", circleArea, (circleArea / totalArea) * 100);
    printf("Area by rectangles: %.2f (%.2f%%)\n\n", rectArea, (rectArea / totalArea) * 100);
    
}

// Main menu
int main() {
    int c;
    while (1) {
        printf("\nWarehouse Management System\n");
        printf("1. Add a circle\n");
        printf("2. Add a rectangle\n");
        printf("3. List items\n");
        printf("4. Get statistics\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &c);

        switch (c) {
            case 1: addCircle(); break;
            case 2: addRectangle(); break;
            case 3: listShapes(); break;
            case 4: showStats(); break;
            case 5: return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
