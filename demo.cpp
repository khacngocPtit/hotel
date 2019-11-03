#include <iostream>
#include <fstream>
using namespace std;

class Nguoi{
	protected:
		char name[30];
		char email[100];
		sdt string[11];
	public:
		void nhap();
		void hienThi();
};
class khachHang :public Nguoi{
	
	private:
		char maKhachHang[30];
		int kieuPhong;
		char moTa[100];
	public:
		void nhap();
		void hienThi();
};
class Phong{
	private:
		char maPhong[30];
		int kieuPhong;
		float mucTienThue;
	public:
		void nhap();
		void hienThi();
};
void bangSapXep()

