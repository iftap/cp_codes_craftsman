#include<stdio.h>

struct circle {
    float dia;
};

struct rect {
    float ht;
    float wt;
};

struct cube {
    float ht;
    float wt;
    float dp;
};

int id=0;
int type[100];
struct circle circ[100];
struct rect rects[100];
struct cube cubes[100];

void add_circle() {
    printf("Enter diameter: ");
    scanf("%f",&circ[id].dia);
    type[id]=1;
    id++;
}

void add_rect() {
    printf("Enter height and width: ");
    scanf("%f %f",&rects[id].ht,&rects[id].wt);
    type[id]=2;
    id++;
}

void add_cube() {
    printf("Enter height, width and depth: ");
    scanf("%f %f %f",&cubes[id].ht,&cubes[id].wt,&cubes[id].dp);
    type[id]=3;
    id++;
}

void list_items() {
    printf("ID------TYPE------Dimension\n");
    for(int i=0;i<id;i++) {
        printf("%d    ",i+1);
        if(type[i]==1) printf("Circle      %.0f\n",circ[i].dia);
        else if(type[i]==3) printf("Cube        %.0f*%.0f*%.0f\n",cubes[i].ht,cubes[i].wt,cubes[i].dp);
        else printf("Rectangle   %.0f*%.0f\n",rects[i].ht,rects[i].wt);
    }
}

void show_stats() {
    int cir=0,rec=0,cub=0;
    float c_area=0,r_area=0,u_area=0,t_area=0,a;

    for(int i=0;i<id;i++) {
        if(type[i]==1) {
            cir++;
            a=3.1416*circ[i].dia*circ[i].dia/4;
            c_area+=a;
            t_area+=a;
        }
        else if(type[i]==3) {
            cub++;
            a=cubes[i].wt*cubes[i].ht*cubes[i].dp;
            u_area+=a;
            t_area+=a;
        }
        else {
            rec++;
            a=rects[i].ht*rects[i].wt;
            r_area+=a;
            t_area+=a;
        }
    }

    float pc=(c_area/t_area)*100;
    float pr=(r_area/t_area)*100;
    float pu=(u_area/t_area)*100;

    printf("Total shapes: %d\n",id);
    printf("Rectangles: %d\n",rec);
    printf("Circles: %d\n",cir);
    printf("Cubes: %d\n",cub);
    printf("Total area: %.2f\n",t_area);
    printf("Rectangles area: %.2f (%.2f%%)\n",r_area,pr);
    printf("Circles area: %.2f (%.2f%%)\n",c_area,pc);
    printf("Cubes area: %.2f (%.2f%%)\n",u_area,pu);
}

int main() {
    int ch;
    while(1) {
        printf("\nWarehouse System\n");
        printf("1.Add circle\n");
        printf("2.Add rectangle\n");
        printf("3.Add cube\n");
        printf("4.List items\n");
        printf("5.Show stats\n");
        printf("6.Exit\n");
        printf("Choice(1-6): ");
        scanf("%d",&ch);

        if(ch==1) add_circle();
        else if(ch==2) add_rect();
        else if(ch==3) add_cube();
        else if(ch==4) list_items();
        else if(ch==5) show_stats();
        else if(ch==6) break;
        else printf("Invalid\n");
    }
    return 0;
}
