
#define M_PI		3.14159265358979323846
#include <iostream>
#include <iomanip>
#include <initializer_list>
#include <graphics.h>
#include <math.h>
using namespace std;

#define forrange(i, a, b) for(int i = (a); i < (b); i++)
#define max(a, b) ((a) > (b)? (b): (a))
#define elif else if
#define KEY_ESC 27
enum AXIS { X = 0, Y, Z, W };

int tam_x,tam_y;
int color;
template <class T>
class Matrix {
private:
    T* data;
    int m;
    int n;
public:
    Matrix<T>(int a, int b): m(a), n(b) {
        data = new T[m * n];
        memset(data, 0, m*n*sizeof(T));
    }
    ~Matrix<T>() {
        delete[] data;
    }
    Matrix<T>(const Matrix<T>& other): Matrix<T>(other.m, other.n) {
        memcpy(data, other.data, m*n*sizeof(T));
    }
    Matrix<T>(initializer_list<T> l) {
    	m = 1, n = l.size();
		data = new T[m * n];
    	int i = 0;
    	for (auto&& item: l) {
    		data[i++] = item;
		}
	}
    T& operator()(int i, int j = -1) {
    	return j == -1? data[i]: data[i * n + j];
	}
	T get(int i, int j = -1) const {
    	return j == -1? data[i]: data[i * n + j];
	}
	Matrix<T>& reshape(int m, int n) {
		if (this->m * this->n != m * n) return *this;
		this->m = m;
		this->n = n;
		return *this;
	}
	Matrix<T> operator*(const Matrix<T>& other) const {
		if (this->n != other.m) {
			cout << "SIZE: " << m << " " << n << endl;
			cout << "DM loi roi " << endl;
			return *this;
		}
		
	    Matrix<T> output(this->m, other.n);
	    forrange(i, 0, output.m) forrange(j, 0, output.n) {
	        output(i, j) = 0;
	           forrange(k, 0, this->n)
	            output(i, j) += this->get(i, k) * other.get(k, j);
	    }
	    return output;
	}
	Matrix<T> operator/(const T value) {
		Matrix<T> output = *this;
		forrange(i, 0, m*n) output.data[i] /= value;
		return output;
	}
	void display() {
		cout << "SIZE: " << m << " " << n << endl;
		forrange(i, 0, m) {
			forrange(j, 0, n) {
				cout << setw(5) << get(i, j);
			}
			cout << endl;
		}
	}
	
	int width() const { return n; }
	int height() const { return m; }
};


double rad(int degree) {
	return (double)degree * M_PI / 180;
} 


Matrix<float> translate(float x, float y, float z) {
	Matrix<float> output(4, 4);
	output(X, X) = output(Y, Y) = output(Z, Z) = output(W, W) = 1;
	output(X, W) = x;
	output(Y, W) = y;
	output(Z, W) = z;
	return output;
}

Matrix<float> rotateZ(double degree, float dcenter_x = 0, float dcenter_y = 0) {
	Matrix<float> output(4, 4);
	output(Z, Z) = output(W, W) = 1;
	output(X, X) = output(Y, Y) = cos(rad(degree));
	output(Y, X) = sin(rad(degree));
	output(X, Y) = -sin(rad(degree));
	return dcenter_x != 0 || dcenter_y != 0
		? translate(dcenter_x, dcenter_y, 0) * output * translate(-dcenter_x, -dcenter_y, 0)
		: output;
}

void vediem(float x, float y, int color, int deg=30) {
	Matrix<float> coord { x, y, 1, 1 };
	coord.reshape(4, 1);
	Matrix<float> rotate = rotateZ(deg, tam_x, tam_y);
	Matrix<float> translated = rotate * coord;
	int _x = round(translated(X));
	int _y = round(translated(Y));
	putpixel(_x, _y, color);

}
void Ve4diem(float xc,float yc,float x, float y, int color)//ve 4 diem doi xung
{
    vediem(xc+x,yc+y,color);
    vediem(xc-x,yc+y,color);
    vediem(xc-x,yc-y,color);
    vediem(xc+x,yc-y,color);
    delay(5);
}

void Elipse(int x_center,int y_center,int a,int b,int color)// ve elipse
{
    float p,a2,b2;
    float x,y;
    a2=pow(a,2);
    b2=pow(b,2);
    x=0;
    y=b;
     
    p=2*((float)b2/a2)-(2*b)+1;
     
    //ve nhanh thu 1(tu tren xuong )
    while(((float)b2/a2)*x<=y)
    {
        Ve4diem(x_center,y_center,x,y,color);
        if(p<0)
        {
            p=p+2*((float)b2/a2)*(2*x+3);
        }
        else{
            p= p- 4*y + 2*((float)b2/a2)*(2*x+3);
            y--;
        }
        x++;
    }
    //ve nhanh thu 2(tu duoi len )
    
    y=0;
    x=a;
    p=2*((float)a2/b2)-2*a+1;
    while(((float)a2/b2)*y<=x)
    {
        Ve4diem(x_center,y_center,x,y,color);
        if(p<0)
        {
            p=p +2*((float)a2/b2)*(2*y+3);
        }
        else
        {
            p=p- 4*x + 2*((float)a2/b2)*(2*y+3);
            x=x-1;
        }
        y=y+1;
    }
}
void nhap(int & tam_x,int & tam_y,int & color)
{
	cout<<" nhap toa do hinh elip la \n";
	cout<<"hoanh do la : x=\n";
	cin >>tam_x;
	cout<<"tung do la :y= \n";
	cin >>tam_y;
	cout<<"nhap gia tri mau sac la ";
	cin>> color;
}
 main()
{
    nhap(tam_x,tam_y,color);
    initwindow(640,480);
    Elipse(tam_x,tam_y,300,150,color);
    
    getch();
    return 0;
}
