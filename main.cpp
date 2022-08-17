#include<iostream>
#include<vector>
#include<string>
using namespace std;

#define PI 22/7

class Shape{ //Shape class

private:
string shape;

public:
Shape(string s){
shape = s;
}

double get_area(){
return 0.0;
}

double get_perimeter(){
return 0.0;
}

string get_name(){
return shape;
}
};

class Circle : public Shape{ //Circle class inheriting Shape class
private:
double diameter;
public:
Circle(double d, string s) : Shape(s){
diameter = d;
}

double get_area(){
return PI * (diameter/2) * (diameter/2);
}

double get_perimeter(){
return PI * diameter;
}
};

class Rectangle : public Shape{ //Rectangle class inheriting Shape class
private:
double length;
double height;
public:
Rectangle(double l, double h, string s) : Shape(s){
length = l;
height = h;
}

double get_area(){
return length * height;
}

double get_perimeter(){
return 2 * (length + height);
}
};

class Triangle : public Shape{ //Traingle class inheriting Shape class
private:
double base;
double length1;
double length2;
double height;
public:
Triangle(double b, double l1, double l2, double h, string s) : Shape(s){
if(l1 < 0 || l2 < 0){
cout<<"\nSide Lengths are Invalid.";
base = 0;
length1 = 0;
length2 = 0;
height = 0;
}
else{
base = b;
length1 = l1;
length2 = l2;
height = h;
}

}

double get_area(){
return 0.5 * base * height;
}

double get_perimeter(){
return (base + length1 + length2);
}
};

int main(){
vector<Shape> shapes;
shapes.push_back(Circle(2, "Circle"));
shapes.push_back(Rectangle(3, 4, "Rectangle"));
shapes.push_back(Triangle(2, 3, 4, 5, "Traingle"));
shapes.push_back(Triangle(2, -3, 4, 5, "Traingle"));

for(auto i = shapes.begin(); i != shapes.end(); i++){
cout<<"\n\nName: "<<i->get_name();
cout<<"\nArea: "<<i->get_area();
cout<<"\nPerimeter: "<<i->get_perimeter();
}
}
