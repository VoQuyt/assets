/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
tienDinhMuc (int chiSo)
{
  return chiSo * 230;
}

int
tienVuotDinhMuc480 (int chiSoVuot)
{
  return chiSoVuot * 480;
}

int
tienVuotDinhMuc700 (int chiSoVuot)
{
  return chiSoVuot * 700;
}

int
tienVuotDinhMuc900 (int chiSoVuot)
{
  return chiSoVuot * 900;
}

int
main ()
{
  int chiSoCu = 11;
  int chiSoMoi = 161;
  
  int chiSoTieuThu = chiSoMoi - chiSoCu;
  int chiSoVuotDinhMuc = 0;

  int tongTien = 0;
  int tienTraDinhMuc = 0;
  int tienTraVuotDinhMuc = 0;

  if (chiSoTieuThu <= 50)
    {
      tienTraDinhMuc = tienDinhMuc (chiSoTieuThu);
    }
  else if (chiSoTieuThu > 50 && chiSoTieuThu <= 100)
    {
      chiSoVuotDinhMuc = 1;
      tienTraDinhMuc = tienDinhMuc (50);
      tienTraVuotDinhMuc = tienVuotDinhMuc480 (chiSoTieuThu - 50);
    }
  else if (chiSoTieuThu > 100 && chiSoTieuThu < 150)
    {
      chiSoVuotDinhMuc = 2;
      tienTraDinhMuc = tienDinhMuc (50);
      tienTraVuotDinhMuc =
	tienVuotDinhMuc700 (chiSoTieuThu - 99) + tienVuotDinhMuc480 (50);
    }
  else if (chiSoTieuThu >= 150)
    {
      chiSoVuotDinhMuc = 3;
      tienTraDinhMuc = tienDinhMuc (50);
      tienTraVuotDinhMuc =
	tienVuotDinhMuc900 (chiSoTieuThu - 149) + tienVuotDinhMuc700 (49) +
	tienVuotDinhMuc480 (50);
    }
  tongTien = tienTraDinhMuc + tienTraVuotDinhMuc;

  cout << "chi so cu: " << chiSoCu;
  cout << "\nchi so moi: " << chiSoMoi;
  cout << "\nchi so tieu thu: " << chiSoTieuThu;
  cout << "\nchi so vuot dinh muc: " << chiSoVuotDinhMuc;
  cout << "\ntien tra dinh muc: " << tienTraDinhMuc;
  cout << "\ntien tra vuot dinh muc: " << tienTraVuotDinhMuc;
  cout << "\ntong tien: " << tongTien;

  return 0;
}
