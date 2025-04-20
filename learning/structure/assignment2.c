#include <stdio.h>
#include <math.h>
typedef struct 
{
    	float x;
    	float y;
} Point;

//distance between two points
float distance(Point p1, Point p2) 
{
    	return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

//midpoint between two points
Point midpoint(Point p1, Point p2) 
{
    	Point mid;
    	mid.x = (p1.x + p2.x) / 2;
    	mid.y = (p1.y + p2.y) / 2;
    	return mid;
}

//area of a triangle formed by three points
float triangleArea(Point p1, Point p2, Point p3) 
{
    	float triangle = ((1/2)*(p1.x*(p2.y - p3.y) + p2.x*(p3.y - p1.y) + p3.x*(p1.y -p2.y)));
}

int main() 
{
    	Point p1, p2, p3;
    	printf("Enter coordinates of Point 1 (x y): ");
    	scanf("%f %f", &p1.x, &p1.y);
    	printf("Enter coordinates of Point 2 (x y): ");
    	scanf("%f %f", &p2.x, &p2.y);
    	printf("Enter coordinates of Point 3 (x y): ");
    	scanf("%f %f", &p3.x, &p3.y);
    	printf("Distance between Point 1 and Point 2: %.2f\n", distance(p1, p2));

    	Point mid = midpoint(p1, p2);
    	printf("Midpoint between Point 1 and Point 2: (%.2f, %.2f)\n", mid.x, mid.y);

    	printf("Area of triangle formed by the three points: %.2f\n", triangleArea(p1, p2, p3));

}

