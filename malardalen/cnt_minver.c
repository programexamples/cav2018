/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

extern void cptr_dummy_func(int x ) ;
int minver(int row , int col , double eps ) ;
int mmul(int row_a , int col_a , int row_b , int col_b ) ;
static double a[3][3]  = { {        3.0,        - 6.0,        7.0}, 
   {        9.0,        0.0,        - 5.0}, 
   {        5.0,        - 8.0,        6.0}};
double b[3][3]  ;
double c[3][3]  ;
double aa[3][3]  ;
double a_i[3][3]  ;
double e[3][3]  ;
double det  ;
double minver_fabs(double n ) 
{ 
  double f ;
  int cptr_minver_fabs_1  = 0;
  int cptr_minver_fabs_2  = 0;

  {
  if (n >= (double )0) {
    cptr_minver_fabs_1 ++;
    f = n;
  } else {
    cptr_minver_fabs_2 ++;
    f = - n;
  }
  return (f);
}
}
int main(void) 
{ 
  int i ;
  int j ;
  double eps ;
  int cptr_main_1  = 0;
  int cptr_main_2  = 0;
  int cptr_main_3  = 0;
  int cptr_main_4  = 0;
  int cptr_main_5  = 0;

  {
  cptr_main_1 ++;
  eps = 1.0e-6;
  i = 0;
  while (i < 3) {
    cptr_main_2 ++;
    j = 0;
    while (j < 3) {
      cptr_main_3 ++;
      aa[i][j] = a[i][j];
      j ++;
    }
    i ++;
  }
  minver(3, 3, eps);
  i = 0;
  while (i < 3) {
    cptr_main_4 ++;
    j = 0;
    while (j < 3) {
      cptr_main_5 ++;
      a_i[i][j] = a[i][j];
      j ++;
    }
    i ++;
  }
  mmul(3, 3, 3, 3);
  return (0);
}
}
int mmul(int row_a , int col_a , int row_b , int col_b ) 
{ 
  int i ;
  int j ;
  int k ;
  int row_c ;
  int col_c ;
  double w ;
  int cptr_mmul_1  = 0;
  int cptr_mmul_2  = 0;
  int cptr_mmul_3  = 0;
  int cptr_mmul_4  = 0;
  int cptr_mmul_5  = 0;

  {
  cptr_mmul_1 ++;
  row_c = row_a;
  col_c = col_b;
  if (row_c < 1) {
    return (999);
  } else
  if (row_b < 1) {
    return (999);
  } else
  if (col_c < 1) {
    return (999);
  } else
  if (col_a != row_b) {
    return (999);
  }
  cptr_mmul_2 ++;
  i = 0;
  while (i < row_c) {
    cptr_mmul_3 ++;
    j = 0;
    while (j < col_c) {
      cptr_mmul_4 ++;
      w = 0.0;
      k = 0;
      while (k < row_b) {
        cptr_mmul_5 ++;
        w += a[i][k] * b[k][j];
        k ++;
      }
      c[i][j] = w;
      j ++;
    }
    i ++;
  }
  return (0);
}
}
int minver(int row , int col , double eps ) 
{ 
  int work[500] ;
  int i ;
  int j ;
  int k ;
  int r ;
  int iw ;
  int s ;
  int t ;
  int u ;
  int v ;
  double w ;
  double wmax ;
  double pivot ;
  double api ;
  double w1 ;
  int cptr_minver_1  = 0;
  int cptr_minver_2  = 0;
  int cptr_minver_3  = 0;
  int cptr_minver_4  = 0;
  int cptr_minver_5  = 0;
  int cptr_minver_6  = 0;
  int cptr_minver_7  = 0;
  int cptr_minver_8  = 0;
  int cptr_minver_9  = 0;
  int cptr_minver_10  = 0;
  int cptr_minver_11  = 0;
  int cptr_minver_12  = 0;
  int cptr_minver_13  = 0;
  int cptr_minver_14  = 0;
  int cptr_minver_15  = 0;
  int cptr_minver_16  = 0;
  int cptr_minver_17  = 0;
  int cptr_minver_18  = 0;
  int cptr_minver_19  = 0;

  {
  if (row < 2) {
    return (999);
  } else
  if (row > 500) {
    return (999);
  } else
  if (eps <= 0.0) {
    return (999);
  }
  cptr_minver_1 ++;
  w1 = 1.0;
  i = 0;
  while (i < row) {
    cptr_minver_2 ++;
    work[i] = i;
    i ++;
  }
  k = 0;
  while (k < row) {
    cptr_minver_3 ++;
    wmax = 0.0;
    i = k;
    while (i < row) {
      cptr_minver_4 ++;
      w = minver_fabs(a[i][k]);
      if (w > wmax) {
        cptr_minver_5 ++;
        wmax = w;
        r = i;
      }
      cptr_minver_6 ++;
      i ++;
    }
    pivot = a[r][k];
    api = minver_fabs(pivot);
    if (api <= eps) {
      cptr_minver_7 ++;
      det = w1;
      return (1);
    }
    cptr_minver_8 ++;
    w1 *= pivot;
    u = k * col;
    v = r * col;
    if (r != k) {
      cptr_minver_9 ++;
      w1 = - w;
      iw = work[k];
      work[k] = work[r];
      work[r] = iw;
      j = 0;
      while (j < row) {
        cptr_minver_10 ++;
        s = u + j;
        t = v + j;
        w = a[k][j];
        a[k][j] = a[r][j];
        a[r][j] = w;
        j ++;
      }
    }
    cptr_minver_11 ++;
    i = 0;
    while (i < row) {
      cptr_minver_12 ++;
      a[k][i] /= pivot;
      i ++;
    }
    i = 0;
    while (i < row) {
      if (i != k) {
        cptr_minver_13 ++;
        v = i * col;
        s = v + k;
        w = a[i][k];
        if (w != 0.0) {
          cptr_minver_14 ++;
          j = 0;
          while (j < row) {
            if (j != k) {
              cptr_minver_15 ++;
              a[i][j] -= w * a[k][j];
            }
            cptr_minver_16 ++;
            j ++;
          }
          a[i][k] = - w / pivot;
        }
      }
      cptr_minver_17 ++;
      i ++;
    }
    a[k][k] = 1.0 / pivot;
    k ++;
  }
  i = 0;
  while (i < row) {
    while (1) {
      k = work[i];
      if (k == i) {
        break;
      }
      cptr_minver_18 ++;
      iw = work[k];
      work[k] = work[i];
      work[i] = iw;
      j = 0;
      while (j < row) {
        cptr_minver_19 ++;
        u = j * col;
        s = u + i;
        t = u + k;
        w = a[k][i];
        a[k][i] = a[k][k];
        a[k][k] = w;
        j ++;
      }
    }
    i ++;
  }
  det = w1;
  return (0);
}
}
