void getTime (int &h, int &m);
int subtract (int h1, int m1, int h2, int m2);
int subtract (int h1, int m1);

void getTime(int &h, int &m)
{
  cout<<"\nEnter (hr:mn): ";
  cin>> h>>m;
}

int subtract (int h1, int m1, int h2, int m2)
{
  //return hour
  /*h2-=h1;
  m2-=m1;
  if (m2<0)
  {
    m2+=60;
    h2--;
  }
  return h2;*/
  
  int h=h2-h1;
  if (m2<m1)
    h--;
  if (h<0)
    h+=24;
  return h;
  
}

int subtract (int m1, int m2)
{
  //return minutes
  return (m2-m1 + 60) % 60;
}