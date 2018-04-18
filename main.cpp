#include <iostream>
#include <vector>
#include <string>
using namespace std;

void sortNums(int &,int &, int&);

void sortNums(int &r,int &g,int &b)
{
  const int redNum = r;
  const int greenNum = g;
  const int blueNum = b;
  if(redNum < greenNum && redNum > blueNum)
  {
    r = greenNum;
  }
  else if(redNum < greenNum && redNum < blueNum)
  {
    r = blueNum;
  }

  if(greenNum > redNum && greenNum > blueNum)
  {
    g = redNum;
  }
  else if(greenNum < redNum && greenNum < blueNum)
  {
    g = blueNum;
  }

  if (blueNum > redNum && blueNum > greenNum)
  {
    b = redNum;
  }
  
  else if(blueNum < redNum && blueNum > greenNum)
  {
    b = greenNum;
  }
}

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  sortNums(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
