/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

float arr[20]  = 
  {      (float )5,      (float )4,      (float )10.3,      (float )1.1, 
        (float )5.7,      (float )100,      (float )231,      (float )111, 
        (float )49.5,      (float )99,      (float )10,      (float )150, 
        (float )222.22,      (float )101,      (float )77,      (float )44, 
        (float )35,      (float )20.54,      (float )99.99,      (float )888.88};
float select(unsigned long k , unsigned long n ) 
{ 
  unsigned long i ;
  unsigned long ir ;
  unsigned long j ;
  unsigned long l ;
  unsigned long mid ;
  float a ;
  float temp ;
  int flag ;
  int flag2 ;

  {
  l = 1UL;
  ir = n;
  flag2 = 0;
  flag = flag2;
  while (! flag) {
    if (ir <= l + 1UL) {
      if (ir == l + 1UL) {
        if (arr[ir] < arr[l]) {
          temp = arr[l];
          arr[l] = arr[ir];
          arr[ir] = temp;
        }
      }
      flag = 1;
    } else
    if (! flag) {
      mid = (l + ir) >> 1;
      temp = arr[mid];
      arr[mid] = arr[l + 1UL];
      arr[l + 1UL] = temp;
      if (arr[l + 1UL] > arr[ir]) {
        temp = arr[l + 1UL];
        arr[l + 1UL] = arr[ir];
        arr[ir] = temp;
      }
      if (arr[l] > arr[ir]) {
        temp = arr[l];
        arr[l] = arr[ir];
        arr[ir] = temp;
      }
      if (arr[l + 1UL] > arr[l]) {
        temp = arr[l + 1UL];
        arr[l + 1UL] = arr[l];
        arr[l] = temp;
      }
      i = l + 1UL;
      j = ir;
      a = arr[l];
      while (! flag2) {
        i ++;
        while (arr[i] < a) {
          i ++;
        }
        j --;
        while (arr[j] > a) {
          j --;
        }
        if (j < i) {
          flag2 = 1;
        }
        if (! flag2) {
          temp = arr[i];
        }
        arr[i] = arr[j];
        arr[j] = temp;
      }
      arr[l] = arr[j];
      arr[j] = a;
      if (j >= k) {
        ir = j - 1UL;
      }
      if (j <= k) {
        l = i;
      }
    }
  }
  return (arr[k]);
}
}
int main(void) 
{ 
  unsigned long k1 ;
  unsigned long n2 ;
  unsigned long i3 ;
  unsigned long ir4 ;
  unsigned long j5 ;
  unsigned long l6 ;
  unsigned long mid7 ;
  float a8 ;
  float temp9 ;
  int flag10 ;
  int flag211 ;

  {
  {
  k1 = 10UL;
  n2 = 20UL;
  {
  l6 = 1UL;
  ir4 = n2;
  flag211 = 0;
  flag10 = flag211;
  while (! flag10) {
    if (ir4 <= l6 + 1UL) {
      if (ir4 == l6 + 1UL) {
        if (arr[ir4] < arr[l6]) {
          temp9 = arr[l6];
          arr[l6] = arr[ir4];
          arr[ir4] = temp9;
        }
      }
      flag10 = 1;
    } else
    if (! flag10) {
      mid7 = (l6 + ir4) >> 1;
      temp9 = arr[mid7];
      arr[mid7] = arr[l6 + 1UL];
      arr[l6 + 1UL] = temp9;
      if (arr[l6 + 1UL] > arr[ir4]) {
        temp9 = arr[l6 + 1UL];
        arr[l6 + 1UL] = arr[ir4];
        arr[ir4] = temp9;
      }
      if (arr[l6] > arr[ir4]) {
        temp9 = arr[l6];
        arr[l6] = arr[ir4];
        arr[ir4] = temp9;
      }
      if (arr[l6 + 1UL] > arr[l6]) {
        temp9 = arr[l6 + 1UL];
        arr[l6 + 1UL] = arr[l6];
        arr[l6] = temp9;
      }
      i3 = l6 + 1UL;
      j5 = ir4;
      a8 = arr[l6];
      while (! flag211) {
        i3 ++;
        while (arr[i3] < a8) {
          i3 ++;
        }
        j5 --;
        while (arr[j5] > a8) {
          j5 --;
        }
        if (j5 < i3) {
          flag211 = 1;
        }
        if (! flag211) {
          temp9 = arr[i3];
        }
        arr[i3] = arr[j5];
        arr[j5] = temp9;
      }
      arr[l6] = arr[j5];
      arr[j5] = a8;
      if (j5 >= k1) {
        ir4 = j5 - 1UL;
      }
      if (j5 <= k1) {
        l6 = i3;
      }
    }
  }
  goto Lret_select;
  }
  Lret_select: /* CIL Label */ ;
  }
  return (0);
}
}