#include <iostream>
using namespace std;
int main() {
  for (int i=0;i<20;i++) {
    cout<<"*";
  }
  cout<<endl;

  for (int i=0;i<20;i++) {
    if (i==0 || i==19) {
      cout<<"*";
    }
    else
    {
      cout<<" ";
    }
  }

  cout<<endl;


  for (int i=0;i<4;i++) {
    for (int i=0;i<20;i++) {
      if (i==2||i==3||i==7||i==8) cout<<"H";
      else if (i==16||i==17) cout<<"I";
      else if (i==0||i==19) cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }

  for (int i=0;i<20;i++) {
    if (i>=2 && i<=8) cout<<"H";
    else if (i==16||i==17) cout<<"I";
    else if (i==0||i==19) cout<<"*";
    else cout<<" ";
  }

  cout<<endl;


  for (int i=0;i<4;i++) {
    for (int i=0;i<20;i++) {
      if (i==2||i==3||i==7||i==8) cout<<"H";
      else if (i==16||i==17) cout<<"I";
      else if (i==0||i==19) cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }

  for (int i=0;i<20;i++) {
    if (i==0 || i==19) {
      cout<<"*";
    }
    else
    {
      cout<<" ";
    }
  }

  cout<<endl;

  for (int i=0;i<20;i++) {
    cout<<"*";
  }

  return 0;
}
