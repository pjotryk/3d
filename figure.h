#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


struct triangle
{
  float normalVector[3];
  float Vertex1[3];
  float Vertex2[3];
  float Vertex3[3];
  unsigned short attributes;
  bool operator==(triangle& left, triangle& right);
};

class figure
{

  char head[80];
  unsigned int quantity;
  triangle* tr;
  
public:  
  figure(FILE* f);
  ~figure();
  
  friend ostream& operator<<(ostream& out, figure& r);
  
  triangle* getTr();
  void writeF(FILE* );
  float FindPath(const float* from, const float* to);
  
};