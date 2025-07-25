/*使用海伦-秦九韶公式计算三角形面积————输入三角形三个边的边长，计算面积
该程序是计算三个三角形之和五边形的面积*/
#include <stdio.h>
#include <math.h>
int main(){
    double a1,a2,a3,a4,a5,a6,a7,s;
    double tri_area(double x,double y,double z);
    printf("Please input a1~a7 in order:");
    scanf("%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
    s=(tri_area(a1,a5,a6)+tri_area(a2,a3,a7)+tri_area(a6,a7,a4));
    printf("s=%.2f\n",s);//%.2f表示输出两位有效数字
    system("pause");
    return 0;

}
double tri_area(double x,double y,double z){
    int is_tri=0;
    double p;
    //先判断输入的这几条边是否构成三角形
    if((x+y>z)&&(x+z>y)&&(y+z>x)&&(x-y<z)&&(y-x<z)&&(x-z<y)&&(z-x<y)&&(y-z<x)&&(z-y<x)){
        is_tri=1;
    }
    if(is_tri==1){
    p=(x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
    }else{
        printf("Error:It can not construct a triangle.\n");
        return 0;
    }    
        
}
