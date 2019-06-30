#include <stdio.h>
#include <math.h>
int main()
{
	float x1,x2,y1,y2;
	float d,m,n;
	float dis;	  
	printf(" Enter the co-ordinates of the first point");
	scanf(" %f %f", &x1,&y1);
		
	printf(" Enter the co-ordinates of the second point");
	scanf(" %f %f", &x2,&y2);

	m=x2-x1;
	n=y2-y1;
	
/*  printf(" First Diff %f Second diff %f",m,n); */
	dis = m*m+n*n;
/*  printf(" DIST %f",dis); */
	d= sqrt(dis);
	printf(" The distance between the two points is %f",d);
return 0;
}

