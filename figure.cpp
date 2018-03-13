#include "figure.h"
#include <cstring>


figure::figure(FILE* f)
{
  fread(this, 84, 1, f);        
  tr = new triangle[quantity];
  for (int i = 0; i < (int)this->quantity; i++)
  {
    fread(&this->tr[i], 50, 1, f);
  }
}

figure::~figure()
{
  delete[] tr;
}

ostream& operator<<(ostream& out, figure& r)
{
  out << left << setw(17) << "Head " << right << r.head << endl;

  out << left << setw(17) << "Quantity " << right << r.quantity << endl;

  for (int j(0); j < (int)r.quantity; j++)
  {
    out << left << "normalVector " << setw(3) << j + 1<< ' ';
    for (int i(0); i < 3; i++)
      out << r.tr[j].normalVector[i] << ", ";
    out << endl;

    out << left << setw(17) << "Vertex1 ";

    for (int i(0); i < 3; i++)
      out << r.tr[j].Vertex1[i] << ", ";
    out << endl;

    out << left << setw(17) << "Vertex2 ";

    for (int i(0); i < 3; i++)
      out << r.tr[j].Vertex2[i] << ", ";
    out << endl;

    out << left << setw(17) << "Vertex3 ";

    for (int i(0); i < 3; i++)
      out << r.tr[j].Vertex3[i] << ", ";
    out << endl;
    out << left << setw(17) << "attributes " << r.tr[j].attributes << endl;
    cout << endl;
  }

  return out;
}

triangle* figure::getTr()
{
  return tr;
}

void figure::writeF(FILE* f)
{
  fwrite(&head, 80, 1, f);
  fwrite(&quantity, 4, 1, f);

  for (int i = 0; i < a; i++)
  {
    fwrite(&tr[i], 48, 1, f);
    fwrite(&attributes, 2, 1, f);
  }
  
}

float figure::FindPath(const float* from, const float* to)
{
	float fPath;
	
	for(int i = 0; i<)
	return fPath;
}

bool triangle::operator==(const float* left, const float* right)
{
	return !memcmp(left, right, 3);
}