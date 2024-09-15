/* Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the co-ordinates:");
  scanf("%d%d",&x,&y);
  if(x>0&&y>0)
    printf("point is in Ist quadrant\n");
  else if(x>0&&y<0)
    printf("point is in IInd quadrant\n");

 else if(x<0&&y<0)
    printf("point is in IIIrd quadrant\n");
    else if(x<0&&y>0)
    printf("point is in IVth quadrant\n");
  else if(x==0&&y==0)
    printf("point is on origin\n");
return 0;
}















