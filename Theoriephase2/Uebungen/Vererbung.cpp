#include<iostream>
class shape{
    public:
    void set_width(int width_in){
        width=width_in;
    }
    void set_height(int height_in){
        height = height_in;
    }
    protected:
    int width;
    int height;
    };

class Rectangle : public shape{
    public:
    void area(){
        int area = width*height;
        std::cout<<"Fläche Rechteck:"<<std::endl;
        std::cout<< area<<std::endl;
    }
};
class Triangle : public shape{
    public:
    int area(){
        int area = 0.5*width*height;
        std::cout<<"Fläche Dreieck:"<<std::endl;
        std::cout<< area<<std::endl;
        return area;
    }
};
class PaintCost: public shape, public Triangle
{
    public:

    void get_cost(int &flaeche){
        int cost = 70*flaeche;
        std::cout<<"Kosten Dreieck:"<<std::endl;
        std::cout<<cost<<std::endl;
    }
};
int main(){
    int flaeche;
    Rectangle rect;
    PaintCost cost_triangle;
    int height;
    int width;
    std::cout<<"Höhe eingeben:"<<std::endl;
    std::cin>>height;
    std::cout<<"Breite eingeben:"<<std::endl;
    std::cin>>width;
    rect.set_height(height);
    rect.set_width(width);
    rect.area();
    Triangle triangle1;
    triangle1.set_height(10);
    triangle1.set_width(10);
    flaeche = triangle1.area();
    cost_triangle.get_cost(flaeche);

}