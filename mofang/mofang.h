#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class cube
{
public:
	void RUN();
	cube()
	{
		NUM = 1;
	};
private:
	int NUM;
	char center[6];
	char edge[12][2];
	char vert[8][3];
	bool input_cube();
	void output_cube();
	void basicMoveR();
	void basicMoveL();
	void basicMoveU();
	void basicMoveD();
	void basicMoved();
	void basicMoveM_h();
	void basicMoveM_v();
	void basicMoveF();
	void basicMoveB();
	void basicMover();
	void basicMoveu();
	void basicMovef();
	void basicMoveb();
	void basicMovex();
	void basicMovey();
	void basicMovez();
	void R();
	void R2();
	void R_();
	void L();
	void L2();
	void L_();
	void r();
	void r2();
	void r_();
	void F();
	void F2();
	void F_();
	void B();
	void B2();
	void B_();
	void f();
	void f2();
	void f_();
	void U();
	void U2();
	void U_();
	void u();
	void u2();
	void u_();
	void D();
	void D2();
	void D_();
	void M_h();
	void M_h2();
	void M_h_();
	void M_v();
	void M_v2();
	void M_v_();
	void x();
	void x2();
	void x_();
	void y();
	void y2();
	void y_();
	void z();
	void z2();
	void z_();
	void bottom_cross();
	void bottom_vert();
	void middlelayer();
	void top_cross();
	void top_face();
	void top_vert();
	void top_edge();
};
