#include <stdio.h>
struct circle{
    float d;
};
struct rectangle{
    float h,w;
};
struct cube{
    float h,w,d;
};
struct shape{
    int id;
    struct circle circ;
    struct rectangle rect;
    struct cube cb;
    float area;
    int fake;
};

int main(){
    struct shape shapes[100];
    int index=0,r=0,c=0,cu=0;
    float ta=0,ra=0,ca= 0,cua= 0;
    while(1){
        printf("Option 1: Add Circle\n");
        printf("Option 2: Add Rectangle\n");
        printf("Option 3: Add Cube\n");
        printf("Option 4: List Items\n");
        printf("Option 5: Get Statistics\n");
        printf("Option 6: Exit\n");
        int x;
        scanf("%d", &x);
        switch(x){
            case 1:
                scanf("%f",&shapes[index].circ.d);
                shapes[index].area=3.1416*shapes[index].circ.d*shapes[index].circ.d/4;
                shapes[index].fake=1;
                shapes[index].id=index+1;
                ta+=shapes[index].area;
                ca+=shapes[index].area;
                c++;
                index++;
                break;
            case 2:
                scanf("%f %f",&shapes[index].rect.h,&shapes[index].rect.w);
                shapes[index].area=shapes[index].rect.h*shapes[index].rect.w;
                shapes[index].fake=2;
                shapes[index].id=index+1;
                ta+=shapes[index].area;
                ra+=shapes[index].area;
                r++;
                index++;
                break;
            case 3:
                scanf("%f %f %f",&shapes[index].cb.h,&shapes[index].cb.w,&shapes[index].cb.d);
                shapes[index].area=2*(shapes[index].cb.h*shapes[index].cb.w+shapes[index].cb.h*shapes[index].cb.d+shapes[index].cb.w*shapes[index].cb.d);
                shapes[index].fake=3;
                shapes[index].id=index+1;
                ta+=shapes[index].area;
                cua+=shapes[index].area;
                cu++;
                index++;
                break;
            case 4:
                printf("Id\tObject\tDimension\n");
                for(int i=0;i<index;i++)
                    {
                    if(shapes[i].fake==1)
                        printf("%d\tCircle\t%.3f\n",shapes[i].id,shapes[i].circ.d);
                    else if(shapes[i].fake==2)
                        printf("%d\tRectangle\t%.3f X %.3f\n",shapes[i].id,shapes[i].rect.h,shapes[i].rect.w);
                    else if(shapes[i].fake==3)
                        printf("%d\tCube\t%.3f X %.3f X %.3f\n",shapes[i].id,shapes[i].cb.h,shapes[i].cb.w,shapes[i].cb.d);
                }
                break;
            case 5:
                printf("Total Number Of Shapes: %d\n",index);
                printf("Total Number Of Rectangles: %d\n",r);
                printf("Total Number Of Circles: %d\n",c);
                printf("Total Number Of Cubes: %d\n",cu);
                printf("Total Area Of Rectangles: %.3f (%.3f%%)\n",ra,ra/ta*100);
                printf("Total Area Of Circles: %.3f (%.3f%%)\n",ca,ca/ta*100);
                printf("Total Area Of Cubes: %.3f (%.3f%%)\n",cua,cua/ta*100);
                break;
            case 6:
                printf("Exited Successfully");
                return 0;
        }
    }
}
