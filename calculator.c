#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int subfunc1 (int a,int b);
int subfunc2 (int a,int b);
void main(){
    int bold,weight,height,length;
    float triangle ,rectangle;
    printf("input Bold :");
    scanf("%d",&bold);
    printf("\ninput Weight :");
    scanf("%d",&weight);
    printf("\ninput height :");
    scanf("%d",&height);
    printf("\ninput length :");
    scanf("%d",&length);
    triangle = subfunc1(bold,weight);
    rectangle = subfunc2(height,length);
    printf("\ntriangle area = %.2f",triangle);
    printf("\nrectangle area = %.2f",rectangle);
    system("\npause");
}
int subfunc1(int a, int b){
    int e;
    e = 0.5 * a * b ;
    return e;
}
int subfunc2(int a, int b){
    int e;
    e = a * b ;
    return e;
}