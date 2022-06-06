#include<bits/stdc++.h>
using namespace std;
int main()
{


int kw = 30;
int n = 220;
/*SERVICE FACTOR = 1.5
%SHAFT MATERIAL=40C8; FOS=2.5;

% KEYS AND BOLTS MATERIAL: 30C8; FOS = 2.5; 
% FLANGES MATERIAL: FG200; FOS= 6

% PERMISSIBLE STRENGTH

%SHAFT*/

int tou_shaft = 76;

/* KEYS AND BOLTS */

int tou_keys_bolts = 80;

int omega_keys_bolts = 240;

/* FLANGES */

float tou_flanges = 16.67;

/* DIAMETER OF SHAFTS */

double M_t = (60*(10^6)*kw*1.5)/(2*3.14*n);

double d = ceil(((16*M_t)/(3.14*tou_shaft))^(1/3));

d = d+1;

cout<<"DIAMETER OF SHAFT IS :"<<d;

/* THE DIAMTER OF THE SHAFT IS FOUND TO BE 52mm 

OUTSIDE DIAMTER OF HUB */
double d_h = 2*d;
cout<<"OUTSIDE DIAMTER OF HUB:"<<d_h;
/*EFFECTIVE LENTGH OF THE KEY */
double l_h = 1.5*d;
cout<<"EFFECTIVE LENGTH OF THE KEY:"<<l_h<<endl;
/* PITCH CIRCLE DIAMETER OF BOLTS */
double D = 3*d;
cout<<"PITCH CIRLCE DIAMTER OF BOLTS:"<<D;
/*THICKNESS OF FLANGES */
double t = 0.5*d;
cout<<"THICKNESS OF FLANGES:"<<t<<endl;
/*THICKNESS OF PROTECTING RIM */
double t_1 = 0.25*d;
cout<<"THICKINESS OF PROTECTING RIM:"<<t_1<<endl;
/*DIAMTER OF SPIGOT AND RECESS*/
double d_r = 1.5*d;
cout<<"DIAMETER OF SPIGOT AND RECESS:"<<d_r;
/* OUTSIDE DIAMETER OF THE FLANGE */
double D_0 = 4*d + 2*(t_1);
cout<<"OUTSIDE DIAMETER OF THE FLANGE:"<<D_0<<endl;

/*THICKNESS OF RECESS = 5mm */
cout<<"THICKNESS OF THE RECESS:5mm"<<endl;
/*THE HUB IS TREATED AS HOLLOW SHAFT SUBJECTED TO TORSION */

double J = 3.14*(((d_h)^4) - d^4)/32;

double r = (d_h)/2 ;

double tou_hub = (M_t*r)/J;

double tou_hub_2 = (2*M_t)/(3.14*(d_h)^(2)*t);

if (tou_hub<tou_flanges&&tou_hub_2<tou_flanges)
    cout<<"THE SHEAR STRESS IN FLANGE IS WITHIN THE LIMIT";
   
    

/*DIAMETER OF BOLTS*/
int M = 4;
cout<<"NO OF BOLTS: 4"<<endl;
double d_1 = ceil(((8*M_t)/(3.14*D*M*tou_keys_bolts))^(1/2));

/*DIMENSION OF KEYS*/

/*USING TABLE */

int b = 16;
int h = 10;

double l =l_h;

cout<<"THE DIMENSIONS OF THE FALT KEY ARE:"<<l;

double tou_3 = (2*M_t)/(d*b*l);

double omega_4 = (4*M_t)/(d*h*l);

if (tou_3<tou_keys_bolts&&omega_4<omega_keys_bolts)
    cout<<"THE SHEAR AND COMPRESSIVE STRESSES INDUCED IN THE KEY ARE WITHIN PERMISSIBLE LIMITS";


}