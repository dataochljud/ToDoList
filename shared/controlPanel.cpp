// keeps track of user prefrences

#include <cstdio>

public class ControlPanel {

private:
  bool tst;
public:
  ~ControlPanel() { printf("Control panel destroyed.")}
  ControlPanel() 
  {
    printf("Control panel created")
  }
};
