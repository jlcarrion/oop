#include <iostream> 
using namespace std;
 
class point {
   private:
      // Miembros clase "point"
      int x, y; 
   public:
      // Funciones de "point"
      void get(int &x1, int &y1);
      void set(int x1, int y1) {
         x = x1;
         y = y1;
      }

};

void point::get(int &x1, int &y1) {
   x1 = x;
   y1 = y;
}

int main() {
   point p1;
   int x, y;
   
   p1.set(50, 60);
   p1.get(x, y);
   cout << "Coordenadas de p1: ";
   cout << x << "," << y << endl;
   return 0;
}
