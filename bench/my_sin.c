extern int undet();
extern double dundet();

double my_sin(double rad,
              int * cptr_my_sin_1,
              int * cptr_my_sin_2,
              int * cptr_my_sin_3,
              int * cptr_my_sin_4) 
{ 
  double app ;
  double diff ;
  int inc ;
  int tmp ;

  *cptr_my_sin_1 = 0;
  *cptr_my_sin_2 = 0;
  *cptr_my_sin_3 = 0;
  *cptr_my_sin_4 = 0;

  {
  (*cptr_my_sin_1) ++;
  inc = 1;
  while (rad > (double )2 * 3.14159) {
    (*cptr_my_sin_2) ++;
    rad -= (double )2 * 3.14159;
  }
  while (rad < (double )-2 * 3.14159) {
    (*cptr_my_sin_3) ++;
    rad += (double )2 * 3.14159;
  }
  diff = rad;
  app = diff;
  diff = (diff * - (rad * rad)) / ((2.0 * (double )inc) * (2.0 * (double )inc + 1.0));
  app += diff;
  inc ++;
  while (1) {
    tmp = undet();
    if (! ((double )tmp >= 0.00001)) {
      break;
    }
    (*cptr_my_sin_4) ++;
    diff = (diff * - (rad * rad)) / ((2.0 * (double )inc) * (2.0 * (double )inc + 1.0));
    app += diff;
    inc ++;
  }
  return (app);
}
}

int main()
{
    double rad;
    double r;
    int cptr_my_sin_1;
    int cptr_my_sin_2;
    int cptr_my_sin_3;
    int cptr_my_sin_4;
    int cptr_my_sin_5;
    int cptr_my_sin_6;
    int cptr_my_sin_7;
    int cptr_my_sin_8;

    rad = dundet();
    r = my_sin(rad,
               &cptr_my_sin_1,
               &cptr_my_sin_2,
               &cptr_my_sin_3,
               &cptr_my_sin_4);

    return 0;
}
