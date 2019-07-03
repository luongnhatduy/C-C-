#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
#include<vector>
using namespace std;
class CNgay{
private:
    int Ngay, Thang,Nam;
public:
    CNgay();
    ~CNgay();
    friend istream& operator >>(istream &, CNgay &);
    friend ostream& operator <<(ostream &, CNgay );
};

CNgay::CNgay()
{
    cout<<"\nKhoi tao CNgay";
    Ngay=0;
    Thang=0;
    Nam=0;
}
CNgay::~CNgay()
{
    cout<<"\nHam huy CNgay";
}
istream& operator >>(istream &is, CNgay &n)
{
    cout<<"\nNhap ngay:";
    is>>n.Ngay;
     cout<<"\nNhap thang:";
    is>>n.Thang;
     cout<<"\nNhap nam:";
    is>>n.Nam;
    return is;
}

ostream& operator <<(ostream &os, CNgay n )
{

    os<<"\n"<<n.Ngay<<"/"<<n.Thang<<"/"<<n.Nam;
    return os;
}
class VeMayBay{
private:
    string TenChuyen;
    int GiaVe;
    CNgay NgayBay;
public:
    VeMayBay();
    VeMayBay(const VeMayBay&);
    VeMayBay(string,CNgay,int);
    ~VeMayBay();
    void Nhap();
    void Xuat();
    int getGiaVe();
};

VeMayBay::VeMayBay()
{
    cout<<"\nHam khoi tao VeMaybay khong tham so";
    //TenChuyen="";
    //GiaVe=0;
    //NgayBay=new NgayBay;
}
VeMayBay::VeMayBay(string ten,CNgay n,int gia)
{
    TenChuyen=ten;
    GiaVe=gia;
    NgayBay=n;
}
VeMayBay::VeMayBay(const VeMayBay &n)
{
    TenChuyen=n.TenChuyen;
    GiaVe=n.GiaVe;
    NgayBay=n.NgayBay;

}
VeMayBay::~VeMayBay()
{
    cout<<"\nHam huy VeMayBay";

}
void VeMayBay::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ten chuyen:";
    getline(cin,TenChuyen);
    cout<<"\nNhap ngay bay:";
    cin>>NgayBay;
    cout<<"\nNhap gia ve:";
    cin>>GiaVe;

}
void VeMayBay::Xuat()
{
    cout<<"\nTenChuyen: "<<TenChuyen<<", Ngay bay: "<<NgayBay<<",GiaVe: "<<GiaVe;
}
int VeMayBay::getGiaVe()
{
    return GiaVe;
}
//--------------------------------------------
class Nguoi{
protected:
    string HoTen,GioiTinh;
    int Tuoi;
public:
    Nguoi();
    virtual~Nguoi();
    Nguoi(string ,string, int);
    Nguoi(const Nguoi&);
    virtual void Nhap();
    virtual void Xuat();

    };
Nguoi::Nguoi()
{
    cout<<"\nHam khoi tao Nguoi ko tham so";
    HoTen="";
    GioiTinh="";
    Tuoi=0;
}
Nguoi::Nguoi(string ten, string gt, int tuoi)
{
    cout<<"\nHam khoi tao Nguoi tham so";
    HoTen=ten;
    GioiTinh=gt;
    Tuoi=tuoi;
}
Nguoi::Nguoi(const Nguoi &n)
{
    cout<<"\nHam khoi tao Nguoi sao chep";
    HoTen=n.HoTen;
    GioiTinh=n.GioiTinh;
    Tuoi=n.Tuoi;
}
Nguoi::~Nguoi()
{
    cout<<"\nHam huy NGuoi";
}
void Nguoi::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ho ten:";
    getline(cin,HoTen);
    cout<<"\nNhap gioi tinh:";
    cin>>GioiTinh;
    cout<<"\nNhap tuoi:";
    cin>>Tuoi;
}
void Nguoi::Xuat()
{
    cout<<"\nHoTen: "<<HoTen<<", GioiTinh: "<<GioiTinh<<", Tuoi: "<<Tuoi;

}class HanhKhach:public Nguoi{

private:
    VeMayBay *ve;
    int SoLuong;
public:
    HanhKhach();
    HanhKhach(string ,string, int,VeMayBay *v, int);
    ~HanhKhach();
    HanhKhach(const HanhKhach&);
    void Nhap();
    void Xuat();
int TongTien();
};

HanhKhach::HanhKhach():Nguoi()
{

    cout<<"\nHam khoi tao HanhKhach ko tham so";
    SoLuong=0;
    ve=new VeMayBay[SoLuong];
}
HanhKhach::HanhKhach(string ten, string gt, int tuoi,VeMayBay *v, int sl):Nguoi(ten,gt,tuoi)
{
    cout<<"\nHam khoi tao HanhKhach co tham so";
    SoLuong=sl;
    ve=new VeMayBay[SoLuong];
    for(int i=0; i<SoLuong;i++)
    {
        ve[i]=v[i];
    }

}
HanhKhach::HanhKhach(const HanhKhach &x):Nguoi(x)
{
    cout<<"\nHam khoi tao HanhKhach sao chep";
    SoLuong=x.SoLuong;
    ve=new VeMayBay[SoLuong];
    for(int i=0; i<SoLuong;i++)
    {
        ve[i]=x.ve[i];
    }
}
HanhKhach::~HanhKhach()
{
    delete ve;
}
void HanhKhach::Nhap()
{
    Nguoi::Nhap();
    cout<<"\nNhap so luong:";
    cin>>SoLuong;
    cout<<"\nNhap ve:";
    ve=new VeMayBay[SoLuong];
    for(int i=0; i<SoLuong;i++)
        ve[i].Nhap();
}
void HanhKhach::Xuat()
{
    Nguoi::Xuat();
    cout<<", Soluong:"<<SoLuong<<", Ve:";
    for(int i=0; i<SoLuong;i++)
        ve[i].Xuat();

}

int HanhKhach::TongTien()
{
    int s=0;
    for(int i=0;i<SoLuong;i++)
    {
        s+=ve[i].getGiaVe();
    }
    return s;
}
int main()
{
    int n;
    cout<<"\nNHap n=";
    cin>>n;
    vector<HanhKhach> ds;
    for(int i=0; i<n;i++)
    {
        HanhKhach a;
        a.Nhap();
        ds.push_back(a);
    }

    cout<<"\nDanh sach vua nhap\n";
    for(int i=0; i<n;i++)
    {
        ds[i].Xuat();
        cout<<" Tong tien:"<<ds[i].TongTien();
    }

}
