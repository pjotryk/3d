// 3D.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "figure.h"
#include <cstdio>


int main(int argc, char** argv)
{
  if (argc < 2)
  {
    //cout << "Enter file name: C:\\Users\\pjotryk\\Desktop\\3D\\Debug\\bottom.stl";

    *argv = "bottom.stl";
  }
  const char* FName = *argv;
  const char* FName2 = "bottom-2.stl";
  FILE* f = fopen(FName, "rb");
  FILE* f2 = fopen(FName2, "w+b");

  if (!f) return 0;
  figure st1(f);
  /*st1.writeF(f2);
  fseek(f2, 0, SEEK_SET);

  figure st2(f2);*/
  cout << st1 << endl;

  fclose(f);
  fclose(f2);

  return 0;
}

анадирская
