#include<iostream>
using namespace std;
class shapes{
    public:
        shapes(string def=""){
            cout << "Shape - "; 
            cout << def;
        }
};
class twoDimensional: public shapes{
    public:
    twoDimensional(){
        cout << "Dimension -> Two Dimensional - ";
    }
};
class threeDimensional:public shapes{
    public:
    threeDimensional()
    {
        cout<< "Dimension -> Three Dimensional - ";
    }
};
class square:public twoDimensional{
    public:
    square(){
        cout << "SQUARE:"<<endl;
    }
    void property(){
        cout << "It has four sides, four equal angles each measuring 90 degrees. it has four" << endl;
    }
};
class triangle: public twoDimensional{
    public:
    triangle(){
        cout<< "TRIANGLE:"<<endl;
    }
    void property(){
        cout << "It has three straight sides, three angles, and three veritices.\n\n";
    }
};
class circle:public twoDimensional{
    public:
    circle(){
        cout << "CIRCLE:"<<endl;
    }
    void property(){
        cout<< "It is made up of a curved line. It has no corners or edges.It is the set of all those points in a plane whose distance from a fixed point remains constant." << endl << endl;
    }
};
class cube:public threeDimensional
{
    public:
        cube(){
            cout<< "CUBE:"<<endl;
        }
        void property(){
            cout << "Cube and cuboid are three-dimensional shape (3d shapes) that have the same number of faces, vertices, and edges." << endl << endl;
        }
};
class pyramid:public threeDimensional{
    public:
        pyramid(){
            cout << "PYRAMID: "<< endl;
        }
        void property(){
            cout << "A pyramid is a polyhedron with a polygon base and an apex with straight edges and flat feces." << endl<< endl;
        }
};

class sphere:public threeDimensional{
    public:
        sphere()
        {
            cout<< "SPHERE:" << endl;
        }
        void property(){
            cout << "A sphere is round in shape. It is a 3D geometric shape that has all the points on its surface that are equidistant from its center."
            <<endl<<endl;
        }
};

int main(){
    string def="A shape or figure is a graphical representation of an object or its external boundary, outline,or external surface, as opposed to other properties such as color, texture, or material type.\n\n";

    shapes s(def);
    triangle t;
    t.property();
    square sq;
    sq.property();
    circle cr;
    cr.property();

    pyramid p;
    p.property();
    cube cb;
    cb.property();
    sphere sp;
    sp.property();

    return 0;
}