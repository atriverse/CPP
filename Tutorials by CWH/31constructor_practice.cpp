/**
 * Represents a 2D point with integer coordinates.
 * 
 * The `Point` class encapsulates the x and y coordinates of a 2D point.
 * It provides a constructor to initialize the coordinates and a method to
 * display the point.
 * 
 * The `distance_bw_points` function calculates the Euclidean distance
 * between two `Point` objects.
 */
#include<iostream>
#include<cmath>

using namespace std;

class Point
{
private:
    int x,y;
    friend float distance_bw_points(Point ,Point );
public:
    Point(int, int);
    void display_point(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
    
};

float distance_bw_points(Point p,Point q)
{
    return sqrt(pow((p.x-q.x),2)+pow((p.y-q.y),2));
}

Point::Point(int a,int b)
{
    x=a;
    y=b;
}


int main(){
    Point p(2,4);
    Point q(5,10);
    cout<<distance_bw_points(p,q)<<endl;
    return 0;
}