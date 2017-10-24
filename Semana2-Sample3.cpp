#include <iostream>
using namespace std;

class point
{
private:
  // Miembros clase "point"
  int x, y;
public:
  // Constructor
    point (int x1, int y1);
  // Funciones de "point"  
  void get (int &x1, int &y1);
  void set (int x1, int y1);
};

point::point (int x1, int y1)
{
  x = x1;
  y = y1;
}

void point::get (int &x1, int &y1)
{
  x1 = x;
  y1 = y;
}

void point::set (int x1, int y1)
{
  x = x1;
  y = y1;
}

// Clase derivada de point:
class line:public point
{
private:
  // Miembros clase "point"
  point a;
  point b;

// ClaseB(int a, int b) : ClaseA(a), datoB(b)
   
public:
  //point(int x1, int y1);      
    line (point a1, point b1):point(int x1, int y1);
    
//        p1(char *n, int e, float s);
//        float LeerSalario() const;
//        void CambiarSalario(const float s);

//    protected:
//        float salarioAnual;
};

// line::line(point a1, point b1)
line (point a1, point b1):point(int x1, int y1);
{
    int x,y;
    a1.get(x,y);
    point a (x, y);
    b1.get(x,y)
    point b (x, y);
//   x = x1;
//   y = y1;
}



main ()
{
  int x, y;
  point p1 (51, 61);
  p1.get (x, y);
  cout << "Coordenadas iniciales \t p1: ";
  cout << x << "," << y << endl;

  p1.set (52, 62);
  p1.get (x, y);
  cout << "Coordenadas nuevas \t p1: ";
  cout << x << "," << y << endl;
  return 0;
}
