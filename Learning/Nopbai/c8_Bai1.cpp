#include "stdio.h"
struct PHANSO{
	int t,m;
};
int UCLN(PHANSO ps){
	int a;
	while (ps.t != ps.m){
		if (ps.t > ps.m)
			ps.t = ps.t - ps.m;
		else
			ps.m = ps.m - ps.t;
	}
	a = ps.t;
	return a;
}
void Rutgon(PHANSO &ps){
	int uc = UCLN(ps);
	ps.t = ps.t/uc;
	ps.m = ps.m/uc;
}
PHANSO Congps(PHANSO ps, PHANSO ps1, PHANSO ps2){
	ps.t = ps1.t*ps2.m+ps2.t*ps1.m;
	ps.m = ps1.m*ps2.m;
	Rutgon(ps);
	return ps;
}
void Nhapps(PHANSO &ps1, PHANSO &ps2){
	scanf("%d%d%d%d", &ps1.t, &ps1.m, &ps2.t, & ps2.m);
}
void In(PHANSO ps){
	printf("%d/%d", ps.t,ps.m);
}
main(){
	PHANSO a,b,c;
	Nhapps(a,b);
	In(Congps(c, a, b));
}
