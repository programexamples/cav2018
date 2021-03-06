/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

extern int undet() ;
extern void __assume(int cond ) ;
int fft1(int n , int flag ) ;
double ar[8]  ;
double ai[8]  = {      0.};
double my_fabs(double n ) 
{ 
  double f ;

  {
  if (n >= (double )0) {
    f = n;
  } else {
    f = - n;
  }
  return (f);
}
}
static double my_log(double n ) 
{ 


  {
  return (4.5);
}
}
double my_sin(double rad ) 
{ 
  double app ;
  double diff ;
  int inc ;
  double tmp ;
  double n6 ;
  double f7 ;
  double ret_my_fabs8 ;

  {
  inc = 1;
  while (rad > (double )2 * 3.14159) {
    rad -= (double )2 * 3.14159;
  }
  while (rad < (double )-2 * 3.14159) {
    rad += (double )2 * 3.14159;
  }
  diff = rad;
  app = diff;
  diff = (diff * - (rad * rad)) / ((2.0 * (double )inc) * (2.0 * (double )inc + 1.0));
  app += diff;
  inc ++;
  while (1) {
    {
    n6 = diff;
    {
    if (n6 >= (double )0) {
      f7 = n6;
    } else {
      f7 = - n6;
    }
    {
    ret_my_fabs8 = f7;
    goto Lret_my_fabs;
    }
    }
    Lret_my_fabs: /* CIL Label */ 
    tmp = ret_my_fabs8;
    }
    if (! (tmp >= 0.00001)) {
      break;
    }
    diff = (diff * - (rad * rad)) / ((2.0 * (double )inc) * (2.0 * (double )inc + 1.0));
    app += diff;
    inc ++;
  }
  return (app);
}
}
static double my_cos(double rad ) 
{ 
  double tmp ;
  double rad3 ;
  double app4 ;
  double diff5 ;
  int inc6 ;
  double tmp7 ;
  double n68 ;
  double f79 ;
  double ret_my_fabs810 ;
  double ret_my_sin11 ;

  {
  {
  rad3 = 3.14159 / 2.0 - rad;
  {
  inc6 = 1;
  while (rad3 > (double )2 * 3.14159) {
    rad3 -= (double )2 * 3.14159;
  }
  while (rad3 < (double )-2 * 3.14159) {
    rad3 += (double )2 * 3.14159;
  }
  diff5 = rad3;
  app4 = diff5;
  diff5 = (diff5 * - (rad3 * rad3)) / ((2.0 * (double )inc6) * (2.0 * (double )inc6 + 1.0));
  app4 += diff5;
  inc6 ++;
  while (1) {
    {
    n68 = diff5;
    {
    if (n68 >= (double )0) {
      f79 = n68;
    } else {
      f79 = - n68;
    }
    {
    ret_my_fabs810 = f79;
    goto Lret_my_fabs;
    }
    }
    Lret_my_fabs: /* CIL Label */ 
    tmp7 = ret_my_fabs810;
    }
    if (! (tmp7 >= 0.00001)) {
      break;
    }
    diff5 = (diff5 * - (rad3 * rad3)) / ((2.0 * (double )inc6) * (2.0 * (double )inc6 + 1.0));
    app4 += diff5;
    inc6 ++;
  }
  {
  ret_my_sin11 = app4;
  goto Lret_my_sin;
  }
  }
  Lret_my_sin: /* CIL Label */ 
  tmp = ret_my_sin11;
  }
  return (tmp);
}
}
int main(void) 
{ 
  int i ;
  int n ;
  int tmp ;
  int flag ;
  int chkerr ;
  double rad6 ;
  double tmp7 ;
  double rad38 ;
  double app49 ;
  double diff510 ;
  int inc611 ;
  double tmp712 ;
  double n6813 ;
  double f7914 ;
  double ret_my_fabs81015 ;
  double ret_my_sin1116 ;
  double ret_my_cos17 ;
  int n18 ;
  int flag19 ;
  int i20 ;
  int j21 ;
  int k22 ;
  int it23 ;
  int xp24 ;
  int xp225 ;
  int j126 ;
  int j227 ;
  int iter28 ;
  double sign29 ;
  double w30 ;
  double wr31 ;
  double wi32 ;
  double dr133 ;
  double dr234 ;
  double di135 ;
  double di236 ;
  double tr37 ;
  double ti38 ;
  double arg39 ;
  double tmp40 ;
  double tmp___041 ;
  double tmp___142 ;
  double tmp___243 ;
  double n2744 ;
  double ret_my_log2845 ;
  double n2946 ;
  double ret_my_log3047 ;
  double n3148 ;
  double f3249 ;
  double ret_my_fabs3350 ;
  double rad3451 ;
  double tmp3552 ;
  double rad33653 ;
  double app43754 ;
  double diff53855 ;
  int inc63956 ;
  double tmp74057 ;
  double n684158 ;
  double f794259 ;
  double ret_my_fabs8104360 ;
  double ret_my_sin114461 ;
  double ret_my_cos4562 ;
  double rad4663 ;
  double app4764 ;
  double diff4865 ;
  int inc4966 ;
  double tmp5067 ;
  double n65168 ;
  double f75269 ;
  double ret_my_fabs85370 ;
  double ret_my_sin5471 ;
  int ret_fft172 ;
  int n73 ;
  int flag74 ;
  int i75 ;
  int j76 ;
  int k77 ;
  int it78 ;
  int xp79 ;
  int xp280 ;
  int j181 ;
  int j282 ;
  int iter83 ;
  double sign84 ;
  double w85 ;
  double wr86 ;
  double wi87 ;
  double dr188 ;
  double dr289 ;
  double di190 ;
  double di291 ;
  double tr92 ;
  double ti93 ;
  double arg94 ;
  double tmp95 ;
  double tmp___096 ;
  double tmp___197 ;
  double tmp___298 ;
  double n2799 ;
  double ret_my_log28100 ;
  double n29101 ;
  double ret_my_log30102 ;
  double n31103 ;
  double f32104 ;
  double ret_my_fabs33105 ;
  double rad34106 ;
  double tmp35107 ;
  double rad336108 ;
  double app437109 ;
  double diff538110 ;
  int inc639111 ;
  double tmp740112 ;
  double n6841113 ;
  double f7942114 ;
  double ret_my_fabs81043115 ;
  double ret_my_sin1144116 ;
  double ret_my_cos45117 ;
  double rad46118 ;
  double app47119 ;
  double diff48120 ;
  int inc49121 ;
  double tmp50122 ;
  double n651123 ;
  double f752124 ;
  double ret_my_fabs853125 ;
  double ret_my_sin54126 ;
  int ret_fft1127 ;

  {
  tmp = undet();
  n = tmp;
  __assume(n >= 2);
  i = 0;
  while (i < n) {
    {
    rad6 = (((double )2 * 3.14159) * (double )i) / (double )n;
    {
    {
    rad38 = 3.14159 / 2.0 - rad6;
    {
    inc611 = 1;
    while (rad38 > (double )2 * 3.14159) {
      rad38 -= (double )2 * 3.14159;
    }
    while (rad38 < (double )-2 * 3.14159) {
      rad38 += (double )2 * 3.14159;
    }
    diff510 = rad38;
    app49 = diff510;
    diff510 = (diff510 * - (rad38 * rad38)) / ((2.0 * (double )inc611) * (2.0 * (double )inc611 + 1.0));
    app49 += diff510;
    inc611 ++;
    while (1) {
      {
      n6813 = diff510;
      {
      if (n6813 >= (double )0) {
        f7914 = n6813;
      } else {
        f7914 = - n6813;
      }
      {
      ret_my_fabs81015 = f7914;
      goto Lret_my_fabs;
      }
      }
      Lret_my_fabs: /* CIL Label */ 
      tmp712 = ret_my_fabs81015;
      }
      if (! (tmp712 >= 0.00001)) {
        break;
      }
      diff510 = (diff510 * - (rad38 * rad38)) / ((2.0 * (double )inc611) * (2.0 * (double )inc611 + 1.0));
      app49 += diff510;
      inc611 ++;
    }
    {
    ret_my_sin1116 = app49;
    goto Lret_my_sin;
    }
    }
    Lret_my_sin: /* CIL Label */ 
    tmp7 = ret_my_sin1116;
    }
    {
    ret_my_cos17 = tmp7;
    goto Lret_my_cos;
    }
    }
    Lret_my_cos: /* CIL Label */ 
    ar[i] = ret_my_cos17;
    i ++;
    }
  }
  {
  flag = 0;
  n18 = n;
  flag19 = flag;
  {
  if (n18 < 2) {
    {
    ret_fft172 = 999;
    goto Lret_fft1;
    }
  }
  {
  n2744 = (double )n18;
  {
  {
  ret_my_log2845 = 4.5;
  goto Lret_my_log;
  }
  }
  Lret_my_log: /* CIL Label */ 
  tmp40 = ret_my_log2845;
  n2946 = 2.0;
  {
  {
  ret_my_log3047 = 4.5;
  goto Lret_my_log___0;
  }
  }
  Lret_my_log___0: /* CIL Label */ 
  tmp___041 = ret_my_log3047;
  iter28 = (int )(tmp40 / tmp___041);
  j21 = 1;
  i20 = 0;
  }
  while (i20 < iter28) {
    j21 *= 2;
    i20 ++;
  }
  {
  n3148 = (double )(n18 - j21);
  {
  if (n3148 >= (double )0) {
    f3249 = n3148;
  } else {
    f3249 = - n3148;
  }
  {
  ret_my_fabs3350 = f3249;
  goto Lret_my_fabs___0;
  }
  }
  Lret_my_fabs___0: /* CIL Label */ 
  tmp___142 = ret_my_fabs3350;
  }
  if (tmp___142 > 1.0e-6) {
    {
    ret_fft172 = 1;
    goto Lret_fft1;
    }
  }
  if (flag19 == 1) {
    sign29 = 1.0;
  } else {
    sign29 = - 1.0;
  }
  xp225 = n18;
  it23 = 0;
  while (it23 < iter28) {
    xp24 = xp225;
    xp225 /= 2;
    w30 = 3.14159 / (double )xp225;
    k22 = 0;
    while (k22 < xp225) {
      {
      arg39 = (double )k22 * w30;
      rad3451 = arg39;
      {
      {
      rad33653 = 3.14159 / 2.0 - rad3451;
      {
      inc63956 = 1;
      while (rad33653 > (double )2 * 3.14159) {
        rad33653 -= (double )2 * 3.14159;
      }
      while (rad33653 < (double )-2 * 3.14159) {
        rad33653 += (double )2 * 3.14159;
      }
      diff53855 = rad33653;
      app43754 = diff53855;
      diff53855 = (diff53855 * - (rad33653 * rad33653)) / ((2.0 * (double )inc63956) * (2.0 * (double )inc63956 + 1.0));
      app43754 += diff53855;
      inc63956 ++;
      while (1) {
        {
        n684158 = diff53855;
        {
        if (n684158 >= (double )0) {
          f794259 = n684158;
        } else {
          f794259 = - n684158;
        }
        {
        ret_my_fabs8104360 = f794259;
        goto Lret_my_fabs___1;
        }
        }
        Lret_my_fabs___1: /* CIL Label */ 
        tmp74057 = ret_my_fabs8104360;
        }
        if (! (tmp74057 >= 0.00001)) {
          break;
        }
        diff53855 = (diff53855 * - (rad33653 * rad33653)) / ((2.0 * (double )inc63956) * (2.0 * (double )inc63956 + 1.0));
        app43754 += diff53855;
        inc63956 ++;
      }
      {
      ret_my_sin114461 = app43754;
      goto Lret_my_sin___0;
      }
      }
      Lret_my_sin___0: /* CIL Label */ 
      tmp3552 = ret_my_sin114461;
      }
      {
      ret_my_cos4562 = tmp3552;
      goto Lret_my_cos___0;
      }
      }
      Lret_my_cos___0: /* CIL Label */ 
      wr31 = ret_my_cos4562;
      rad4663 = arg39;
      {
      inc4966 = 1;
      while (rad4663 > (double )2 * 3.14159) {
        rad4663 -= (double )2 * 3.14159;
      }
      while (rad4663 < (double )-2 * 3.14159) {
        rad4663 += (double )2 * 3.14159;
      }
      diff4865 = rad4663;
      app4764 = diff4865;
      diff4865 = (diff4865 * - (rad4663 * rad4663)) / ((2.0 * (double )inc4966) * (2.0 * (double )inc4966 + 1.0));
      app4764 += diff4865;
      inc4966 ++;
      while (1) {
        {
        n65168 = diff4865;
        {
        if (n65168 >= (double )0) {
          f75269 = n65168;
        } else {
          f75269 = - n65168;
        }
        {
        ret_my_fabs85370 = f75269;
        goto Lret_my_fabs___2;
        }
        }
        Lret_my_fabs___2: /* CIL Label */ 
        tmp5067 = ret_my_fabs85370;
        }
        if (! (tmp5067 >= 0.00001)) {
          break;
        }
        diff4865 = (diff4865 * - (rad4663 * rad4663)) / ((2.0 * (double )inc4966) * (2.0 * (double )inc4966 + 1.0));
        app4764 += diff4865;
        inc4966 ++;
      }
      {
      ret_my_sin5471 = app4764;
      goto Lret_my_sin___1;
      }
      }
      Lret_my_sin___1: /* CIL Label */ 
      tmp___243 = ret_my_sin5471;
      wi32 = sign29 * tmp___243;
      i20 = k22 - xp24;
      j21 = xp24;
      }
      while (j21 <= n18) {
        j126 = j21 + i20;
        j227 = j126 + xp225;
        dr133 = ar[j126];
        dr234 = ar[j227];
        di135 = ai[j126];
        di236 = ai[j227];
        tr37 = dr133 - dr234;
        ti38 = di135 - di236;
        ar[j126] = dr133 + dr234;
        ai[j126] = di135 + di236;
        ar[j227] = tr37 * wr31 - ti38 * wi32;
        ai[j227] = ti38 * wr31 + tr37 * wi32;
        j21 += xp24;
      }
      k22 ++;
    }
    it23 ++;
  }
  j126 = n18 / 2;
  j227 = n18 - 1;
  j21 = 1;
  i20 = 1;
  while (i20 <= j227) {
    if (i20 < j21) {
      tr37 = ar[j21 - 1];
      ti38 = ai[j21 - 1];
      ar[j21 - 1] = ar[i20 - 1];
      ai[j21 - 1] = ai[i20 - 1];
      ar[i20 - 1] = tr37;
      ai[i20 - 1] = ti38;
    }
    k22 = j126;
    while (k22 < j21) {
      j21 -= k22;
      k22 /= 2;
    }
    j21 += k22;
    i20 ++;
  }
  if (flag19 == 0) {
    {
    ret_fft172 = 0;
    goto Lret_fft1;
    }
  }
  w30 = (double )n18;
  i20 = 0;
  while (i20 < n18) {
    ar[i20] /= w30;
    ai[i20] /= w30;
    i20 ++;
  }
  {
  ret_fft172 = 0;
  goto Lret_fft1;
  }
  }
  Lret_fft1: /* CIL Label */ 
  chkerr = ret_fft172;
  flag = 1;
  n73 = n;
  flag74 = flag;
  {
  if (n73 < 2) {
    {
    ret_fft1127 = 999;
    goto Lret_fft1___0;
    }
  }
  {
  n2799 = (double )n73;
  {
  {
  ret_my_log28100 = 4.5;
  goto Lret_my_log___1;
  }
  }
  Lret_my_log___1: /* CIL Label */ 
  tmp95 = ret_my_log28100;
  n29101 = 2.0;
  {
  {
  ret_my_log30102 = 4.5;
  goto Lret_my_log___2;
  }
  }
  Lret_my_log___2: /* CIL Label */ 
  tmp___096 = ret_my_log30102;
  iter83 = (int )(tmp95 / tmp___096);
  j76 = 1;
  i75 = 0;
  }
  while (i75 < iter83) {
    j76 *= 2;
    i75 ++;
  }
  {
  n31103 = (double )(n73 - j76);
  {
  if (n31103 >= (double )0) {
    f32104 = n31103;
  } else {
    f32104 = - n31103;
  }
  {
  ret_my_fabs33105 = f32104;
  goto Lret_my_fabs___3;
  }
  }
  Lret_my_fabs___3: /* CIL Label */ 
  tmp___197 = ret_my_fabs33105;
  }
  if (tmp___197 > 1.0e-6) {
    {
    ret_fft1127 = 1;
    goto Lret_fft1___0;
    }
  }
  if (flag74 == 1) {
    sign84 = 1.0;
  } else {
    sign84 = - 1.0;
  }
  xp280 = n73;
  it78 = 0;
  while (it78 < iter83) {
    xp79 = xp280;
    xp280 /= 2;
    w85 = 3.14159 / (double )xp280;
    k77 = 0;
    while (k77 < xp280) {
      {
      arg94 = (double )k77 * w85;
      rad34106 = arg94;
      {
      {
      rad336108 = 3.14159 / 2.0 - rad34106;
      {
      inc639111 = 1;
      while (rad336108 > (double )2 * 3.14159) {
        rad336108 -= (double )2 * 3.14159;
      }
      while (rad336108 < (double )-2 * 3.14159) {
        rad336108 += (double )2 * 3.14159;
      }
      diff538110 = rad336108;
      app437109 = diff538110;
      diff538110 = (diff538110 * - (rad336108 * rad336108)) / ((2.0 * (double )inc639111) * (2.0 * (double )inc639111 + 1.0));
      app437109 += diff538110;
      inc639111 ++;
      while (1) {
        {
        n6841113 = diff538110;
        {
        if (n6841113 >= (double )0) {
          f7942114 = n6841113;
        } else {
          f7942114 = - n6841113;
        }
        {
        ret_my_fabs81043115 = f7942114;
        goto Lret_my_fabs___4;
        }
        }
        Lret_my_fabs___4: /* CIL Label */ 
        tmp740112 = ret_my_fabs81043115;
        }
        if (! (tmp740112 >= 0.00001)) {
          break;
        }
        diff538110 = (diff538110 * - (rad336108 * rad336108)) / ((2.0 * (double )inc639111) * (2.0 * (double )inc639111 + 1.0));
        app437109 += diff538110;
        inc639111 ++;
      }
      {
      ret_my_sin1144116 = app437109;
      goto Lret_my_sin___2;
      }
      }
      Lret_my_sin___2: /* CIL Label */ 
      tmp35107 = ret_my_sin1144116;
      }
      {
      ret_my_cos45117 = tmp35107;
      goto Lret_my_cos___1;
      }
      }
      Lret_my_cos___1: /* CIL Label */ 
      wr86 = ret_my_cos45117;
      rad46118 = arg94;
      {
      inc49121 = 1;
      while (rad46118 > (double )2 * 3.14159) {
        rad46118 -= (double )2 * 3.14159;
      }
      while (rad46118 < (double )-2 * 3.14159) {
        rad46118 += (double )2 * 3.14159;
      }
      diff48120 = rad46118;
      app47119 = diff48120;
      diff48120 = (diff48120 * - (rad46118 * rad46118)) / ((2.0 * (double )inc49121) * (2.0 * (double )inc49121 + 1.0));
      app47119 += diff48120;
      inc49121 ++;
      while (1) {
        {
        n651123 = diff48120;
        {
        if (n651123 >= (double )0) {
          f752124 = n651123;
        } else {
          f752124 = - n651123;
        }
        {
        ret_my_fabs853125 = f752124;
        goto Lret_my_fabs___5;
        }
        }
        Lret_my_fabs___5: /* CIL Label */ 
        tmp50122 = ret_my_fabs853125;
        }
        if (! (tmp50122 >= 0.00001)) {
          break;
        }
        diff48120 = (diff48120 * - (rad46118 * rad46118)) / ((2.0 * (double )inc49121) * (2.0 * (double )inc49121 + 1.0));
        app47119 += diff48120;
        inc49121 ++;
      }
      {
      ret_my_sin54126 = app47119;
      goto Lret_my_sin___3;
      }
      }
      Lret_my_sin___3: /* CIL Label */ 
      tmp___298 = ret_my_sin54126;
      wi87 = sign84 * tmp___298;
      i75 = k77 - xp79;
      j76 = xp79;
      }
      while (j76 <= n73) {
        j181 = j76 + i75;
        j282 = j181 + xp280;
        dr188 = ar[j181];
        dr289 = ar[j282];
        di190 = ai[j181];
        di291 = ai[j282];
        tr92 = dr188 - dr289;
        ti93 = di190 - di291;
        ar[j181] = dr188 + dr289;
        ai[j181] = di190 + di291;
        ar[j282] = tr92 * wr86 - ti93 * wi87;
        ai[j282] = ti93 * wr86 + tr92 * wi87;
        j76 += xp79;
      }
      k77 ++;
    }
    it78 ++;
  }
  j181 = n73 / 2;
  j282 = n73 - 1;
  j76 = 1;
  i75 = 1;
  while (i75 <= j282) {
    if (i75 < j76) {
      tr92 = ar[j76 - 1];
      ti93 = ai[j76 - 1];
      ar[j76 - 1] = ar[i75 - 1];
      ai[j76 - 1] = ai[i75 - 1];
      ar[i75 - 1] = tr92;
      ai[i75 - 1] = ti93;
    }
    k77 = j181;
    while (k77 < j76) {
      j76 -= k77;
      k77 /= 2;
    }
    j76 += k77;
    i75 ++;
  }
  if (flag74 == 0) {
    {
    ret_fft1127 = 0;
    goto Lret_fft1___0;
    }
  }
  w85 = (double )n73;
  i75 = 0;
  while (i75 < n73) {
    ar[i75] /= w85;
    ai[i75] /= w85;
    i75 ++;
  }
  {
  ret_fft1127 = 0;
  goto Lret_fft1___0;
  }
  }
  Lret_fft1___0: /* CIL Label */ 
  chkerr = ret_fft1127;
  }
  return (0);
}
}
int fft1(int n , int flag ) 
{ 
  int i ;
  int j ;
  int k ;
  int it ;
  int xp ;
  int xp2 ;
  int j1 ;
  int j2 ;
  int iter ;
  double sign ;
  double w ;
  double wr ;
  double wi ;
  double dr1 ;
  double dr2 ;
  double di1 ;
  double di2 ;
  double tr ;
  double ti ;
  double arg ;
  double tmp ;
  double tmp___0 ;
  double tmp___1 ;
  double tmp___2 ;
  double n27 ;
  double ret_my_log28 ;
  double n29 ;
  double ret_my_log30 ;
  double n31 ;
  double f32 ;
  double ret_my_fabs33 ;
  double rad34 ;
  double tmp35 ;
  double rad336 ;
  double app437 ;
  double diff538 ;
  int inc639 ;
  double tmp740 ;
  double n6841 ;
  double f7942 ;
  double ret_my_fabs81043 ;
  double ret_my_sin1144 ;
  double ret_my_cos45 ;
  double rad46 ;
  double app47 ;
  double diff48 ;
  int inc49 ;
  double tmp50 ;
  double n651 ;
  double f752 ;
  double ret_my_fabs853 ;
  double ret_my_sin54 ;

  {
  if (n < 2) {
    return (999);
  }
  {
  n27 = (double )n;
  {
  {
  ret_my_log28 = 4.5;
  goto Lret_my_log;
  }
  }
  Lret_my_log: /* CIL Label */ 
  tmp = ret_my_log28;
  n29 = 2.0;
  {
  {
  ret_my_log30 = 4.5;
  goto Lret_my_log___0;
  }
  }
  Lret_my_log___0: /* CIL Label */ 
  tmp___0 = ret_my_log30;
  iter = (int )(tmp / tmp___0);
  j = 1;
  i = 0;
  }
  while (i < iter) {
    j *= 2;
    i ++;
  }
  {
  n31 = (double )(n - j);
  {
  if (n31 >= (double )0) {
    f32 = n31;
  } else {
    f32 = - n31;
  }
  {
  ret_my_fabs33 = f32;
  goto Lret_my_fabs;
  }
  }
  Lret_my_fabs: /* CIL Label */ 
  tmp___1 = ret_my_fabs33;
  }
  if (tmp___1 > 1.0e-6) {
    return (1);
  }
  if (flag == 1) {
    sign = 1.0;
  } else {
    sign = - 1.0;
  }
  xp2 = n;
  it = 0;
  while (it < iter) {
    xp = xp2;
    xp2 /= 2;
    w = 3.14159 / (double )xp2;
    k = 0;
    while (k < xp2) {
      {
      arg = (double )k * w;
      rad34 = arg;
      {
      {
      rad336 = 3.14159 / 2.0 - rad34;
      {
      inc639 = 1;
      while (rad336 > (double )2 * 3.14159) {
        rad336 -= (double )2 * 3.14159;
      }
      while (rad336 < (double )-2 * 3.14159) {
        rad336 += (double )2 * 3.14159;
      }
      diff538 = rad336;
      app437 = diff538;
      diff538 = (diff538 * - (rad336 * rad336)) / ((2.0 * (double )inc639) * (2.0 * (double )inc639 + 1.0));
      app437 += diff538;
      inc639 ++;
      while (1) {
        {
        n6841 = diff538;
        {
        if (n6841 >= (double )0) {
          f7942 = n6841;
        } else {
          f7942 = - n6841;
        }
        {
        ret_my_fabs81043 = f7942;
        goto Lret_my_fabs___0;
        }
        }
        Lret_my_fabs___0: /* CIL Label */ 
        tmp740 = ret_my_fabs81043;
        }
        if (! (tmp740 >= 0.00001)) {
          break;
        }
        diff538 = (diff538 * - (rad336 * rad336)) / ((2.0 * (double )inc639) * (2.0 * (double )inc639 + 1.0));
        app437 += diff538;
        inc639 ++;
      }
      {
      ret_my_sin1144 = app437;
      goto Lret_my_sin;
      }
      }
      Lret_my_sin: /* CIL Label */ 
      tmp35 = ret_my_sin1144;
      }
      {
      ret_my_cos45 = tmp35;
      goto Lret_my_cos;
      }
      }
      Lret_my_cos: /* CIL Label */ 
      wr = ret_my_cos45;
      rad46 = arg;
      {
      inc49 = 1;
      while (rad46 > (double )2 * 3.14159) {
        rad46 -= (double )2 * 3.14159;
      }
      while (rad46 < (double )-2 * 3.14159) {
        rad46 += (double )2 * 3.14159;
      }
      diff48 = rad46;
      app47 = diff48;
      diff48 = (diff48 * - (rad46 * rad46)) / ((2.0 * (double )inc49) * (2.0 * (double )inc49 + 1.0));
      app47 += diff48;
      inc49 ++;
      while (1) {
        {
        n651 = diff48;
        {
        if (n651 >= (double )0) {
          f752 = n651;
        } else {
          f752 = - n651;
        }
        {
        ret_my_fabs853 = f752;
        goto Lret_my_fabs___1;
        }
        }
        Lret_my_fabs___1: /* CIL Label */ 
        tmp50 = ret_my_fabs853;
        }
        if (! (tmp50 >= 0.00001)) {
          break;
        }
        diff48 = (diff48 * - (rad46 * rad46)) / ((2.0 * (double )inc49) * (2.0 * (double )inc49 + 1.0));
        app47 += diff48;
        inc49 ++;
      }
      {
      ret_my_sin54 = app47;
      goto Lret_my_sin___0;
      }
      }
      Lret_my_sin___0: /* CIL Label */ 
      tmp___2 = ret_my_sin54;
      wi = sign * tmp___2;
      i = k - xp;
      j = xp;
      }
      while (j <= n) {
        j1 = j + i;
        j2 = j1 + xp2;
        dr1 = ar[j1];
        dr2 = ar[j2];
        di1 = ai[j1];
        di2 = ai[j2];
        tr = dr1 - dr2;
        ti = di1 - di2;
        ar[j1] = dr1 + dr2;
        ai[j1] = di1 + di2;
        ar[j2] = tr * wr - ti * wi;
        ai[j2] = ti * wr + tr * wi;
        j += xp;
      }
      k ++;
    }
    it ++;
  }
  j1 = n / 2;
  j2 = n - 1;
  j = 1;
  i = 1;
  while (i <= j2) {
    if (i < j) {
      tr = ar[j - 1];
      ti = ai[j - 1];
      ar[j - 1] = ar[i - 1];
      ai[j - 1] = ai[i - 1];
      ar[i - 1] = tr;
      ai[i - 1] = ti;
    }
    k = j1;
    while (k < j) {
      j -= k;
      k /= 2;
    }
    j += k;
    i ++;
  }
  if (flag == 0) {
    return (0);
  }
  w = (double )n;
  i = 0;
  while (i < n) {
    ar[i] /= w;
    ai[i] /= w;
    i ++;
  }
  return (0);
}
}
int main2(void) 
{ 
  double rad ;
  double r ;
  double tmp ;

  {
  tmp = my_sin(rad);
  r = tmp;
  return (0);
}
}
