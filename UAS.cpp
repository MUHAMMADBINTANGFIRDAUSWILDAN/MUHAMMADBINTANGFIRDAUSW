
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()

{
float X[300];
float Y[300];
float data, totalX, totalY, totalXY, totalXkuadrat, totalYKuadrat,
kuadrattotalX;
int i, ulang, korelasi;
do

{
 totalX=0, totalY=0, totalXY=0, totalXkuadrat=0, totalYKuadrat=0;
 cout << endl;
 cout << " Input Jumlah N : " ; cin >> data ;
 cout << endl ;

 for (i=0 ; i<data ; i++)
 {
 cout << " INPUT X-" << i+1 << " : " ; cin >> X[i];
 cout << " INPUT Y-" << i+1 << " : " ; cin >> Y[i];
 cout << endl;
 }
 
 cout << endl;

 for (i=0 ; i<data ; i++)
 totalXY=totalXY+(X[i]*Y[i]);

 for (i=0 ; i<data ; i++)
 
 {
 totalX=totalX+X[i];
 totalY=totalY+Y[i];
 }

 for (i=0 ; i<data ; i++)
 totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
 
 for (i=0 ; i<data ; i++)
 totalYKuadrat=totalYKuadrat+(Y[i]*Y[i]);
 
 for (i=0 ; i<data ; i++)
 kuadrattotalX=totalX*totalX;
 
 float pkt1 = 2;
 float nX = data*totalX;
 float pangkatA = pow(nX,pkt1);
 float akarA = sqrt((data*totalXkuadrat)-(pangkatA));
 float pkt2 = 2;
 float nY = data*totalY;
 float pangkatB = pow(nY,pkt2);
 float akarB = sqrt((data*totalYKuadrat)-(pangkatB));
 float r =((data*totalXY)- (totalX*totalY)) / ( akarA + akarB );
 float koefisiendeterminasi = (r*r) * (100/100);

 if (r<0.09){
 cout << "Hubungan korelasi diabaikan"; cin >> korelasi;
 }
 if (r<0.29){
 cout << "Hubungan korelasi rendah"; cin >> korelasi;
 }
 if (r<0.49){
 cout << "Hubungan korelasi moderat"; cin >> korelasi;
 }
 if (r<0.70){
 cout << "Hubungan korelasi sedang"; cin >> korelasi;
 }
 if (r>0.70){
 cout << "Hubungan korelasi sangat kuat"; cin >> korelasi;
 }
 cout << " Output yang Dihasilkan" << endl;
 cout << "a. Nilai Korelasi R = " << r << endl;
 cout << "b. Nilai Koefisien Determinasi = " << koefisiendeterminasi << endl;
 cout << "c. Kekuatan Hubungan dari Nilai Korelasi R = " << korelasi << endl;


 } while (ulang=='Y' || ulang=='y');

}
