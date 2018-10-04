/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

int data[64]  ;
void jpeg_fdct_islow(void) 
{ 
  int tmp0 ;
  int tmp1 ;
  int tmp2 ;
  int tmp3 ;
  int tmp4 ;
  int tmp5 ;
  int tmp6 ;
  int tmp7 ;
  int tmp10 ;
  int tmp11 ;
  int tmp12 ;
  int tmp13 ;
  int z1 ;
  int z2 ;
  int z3 ;
  int z4 ;
  int z5 ;
  int *dataptr ;
  int ctr ;

  {
  dataptr = data;
  ctr = 7;
  while (ctr >= 0) {
    tmp0 = *(dataptr + 0) + *(dataptr + 7);
    tmp7 = *(dataptr + 0) - *(dataptr + 7);
    tmp1 = *(dataptr + 1) + *(dataptr + 6);
    tmp6 = *(dataptr + 1) - *(dataptr + 6);
    tmp2 = *(dataptr + 2) + *(dataptr + 5);
    tmp5 = *(dataptr + 2) - *(dataptr + 5);
    tmp3 = *(dataptr + 3) + *(dataptr + 4);
    tmp4 = *(dataptr + 3) - *(dataptr + 4);
    tmp10 = tmp0 + tmp3;
    tmp13 = tmp0 - tmp3;
    tmp11 = tmp1 + tmp2;
    tmp12 = tmp1 - tmp2;
    *(dataptr + 0) = (tmp10 + tmp11) << 2;
    *(dataptr + 4) = (tmp10 - tmp11) << 2;
    z1 = (tmp12 + tmp13) * 4433;
    *(dataptr + 2) = ((z1 + tmp13 * 6270) + (1 << 10)) >> 11;
    *(dataptr + 6) = ((z1 + tmp12 * -15137) + (1 << 10)) >> 11;
    z1 = tmp4 + tmp7;
    z2 = tmp5 + tmp6;
    z3 = tmp4 + tmp6;
    z4 = tmp5 + tmp7;
    z5 = (z3 + z4) * 9633;
    tmp4 *= 2446;
    tmp5 *= 16819;
    tmp6 *= 25172;
    tmp7 *= 12299;
    z1 *= -7373;
    z2 *= -20995;
    z3 *= -16069;
    z4 *= -3196;
    z3 += z5;
    z4 += z5;
    *(dataptr + 7) = (((tmp4 + z1) + z3) + (1 << 10)) >> 11;
    *(dataptr + 5) = (((tmp5 + z2) + z4) + (1 << 10)) >> 11;
    *(dataptr + 3) = (((tmp6 + z2) + z3) + (1 << 10)) >> 11;
    *(dataptr + 1) = (((tmp7 + z1) + z4) + (1 << 10)) >> 11;
    dataptr += 8;
    ctr --;
  }
  dataptr = data;
  ctr = 7;
  while (ctr >= 0) {
    tmp0 = *(dataptr + 0) + *(dataptr + 56);
    tmp7 = *(dataptr + 0) - *(dataptr + 56);
    tmp1 = *(dataptr + 8) + *(dataptr + 48);
    tmp6 = *(dataptr + 8) - *(dataptr + 48);
    tmp2 = *(dataptr + 16) + *(dataptr + 40);
    tmp5 = *(dataptr + 16) - *(dataptr + 40);
    tmp3 = *(dataptr + 24) + *(dataptr + 32);
    tmp4 = *(dataptr + 24) - *(dataptr + 32);
    tmp10 = tmp0 + tmp3;
    tmp13 = tmp0 - tmp3;
    tmp11 = tmp1 + tmp2;
    tmp12 = tmp1 - tmp2;
    *(dataptr + 0) = ((tmp10 + tmp11) + (1 << 1)) >> 2;
    *(dataptr + 32) = ((tmp10 - tmp11) + (1 << 1)) >> 2;
    z1 = (tmp12 + tmp13) * 4433;
    *(dataptr + 16) = ((z1 + tmp13 * 6270) + (1 << 14)) >> 15;
    *(dataptr + 48) = ((z1 + tmp12 * -15137) + (1 << 14)) >> 15;
    z1 = tmp4 + tmp7;
    z2 = tmp5 + tmp6;
    z3 = tmp4 + tmp6;
    z4 = tmp5 + tmp7;
    z5 = (z3 + z4) * 9633;
    tmp4 *= 2446;
    tmp5 *= 16819;
    tmp6 *= 25172;
    tmp7 *= 12299;
    z1 *= -7373;
    z2 *= -20995;
    z3 *= -16069;
    z4 *= -3196;
    z3 += z5;
    z4 += z5;
    *(dataptr + 56) = (((tmp4 + z1) + z3) + (1 << 14)) >> 15;
    *(dataptr + 40) = (((tmp5 + z2) + z4) + (1 << 14)) >> 15;
    *(dataptr + 24) = (((tmp6 + z2) + z3) + (1 << 14)) >> 15;
    *(dataptr + 8) = (((tmp7 + z1) + z4) + (1 << 14)) >> 15;
    dataptr ++;
    ctr --;
  }
  return;
}
}
void main(void) 
{ 
  int i ;
  int seed ;
  int tmp03 ;
  int tmp14 ;
  int tmp25 ;
  int tmp36 ;
  int tmp47 ;
  int tmp58 ;
  int tmp69 ;
  int tmp710 ;
  int tmp1011 ;
  int tmp1112 ;
  int tmp1213 ;
  int tmp1314 ;
  int z115 ;
  int z216 ;
  int z317 ;
  int z418 ;
  int z519 ;
  int *dataptr20 ;
  int ctr21 ;

  {
  seed = 1;
  i = 0;
  while (i < 64) {
    seed = (seed * 133 + 81) % 65535;
    data[i] = seed;
    i ++;
  }
  {
  {
  dataptr20 = data;
  ctr21 = 7;
  while (ctr21 >= 0) {
    tmp03 = *(dataptr20 + 0) + *(dataptr20 + 7);
    tmp710 = *(dataptr20 + 0) - *(dataptr20 + 7);
    tmp14 = *(dataptr20 + 1) + *(dataptr20 + 6);
    tmp69 = *(dataptr20 + 1) - *(dataptr20 + 6);
    tmp25 = *(dataptr20 + 2) + *(dataptr20 + 5);
    tmp58 = *(dataptr20 + 2) - *(dataptr20 + 5);
    tmp36 = *(dataptr20 + 3) + *(dataptr20 + 4);
    tmp47 = *(dataptr20 + 3) - *(dataptr20 + 4);
    tmp1011 = tmp03 + tmp36;
    tmp1314 = tmp03 - tmp36;
    tmp1112 = tmp14 + tmp25;
    tmp1213 = tmp14 - tmp25;
    *(dataptr20 + 0) = (tmp1011 + tmp1112) << 2;
    *(dataptr20 + 4) = (tmp1011 - tmp1112) << 2;
    z115 = (tmp1213 + tmp1314) * 4433;
    *(dataptr20 + 2) = ((z115 + tmp1314 * 6270) + (1 << 10)) >> 11;
    *(dataptr20 + 6) = ((z115 + tmp1213 * -15137) + (1 << 10)) >> 11;
    z115 = tmp47 + tmp710;
    z216 = tmp58 + tmp69;
    z317 = tmp47 + tmp69;
    z418 = tmp58 + tmp710;
    z519 = (z317 + z418) * 9633;
    tmp47 *= 2446;
    tmp58 *= 16819;
    tmp69 *= 25172;
    tmp710 *= 12299;
    z115 *= -7373;
    z216 *= -20995;
    z317 *= -16069;
    z418 *= -3196;
    z317 += z519;
    z418 += z519;
    *(dataptr20 + 7) = (((tmp47 + z115) + z317) + (1 << 10)) >> 11;
    *(dataptr20 + 5) = (((tmp58 + z216) + z418) + (1 << 10)) >> 11;
    *(dataptr20 + 3) = (((tmp69 + z216) + z317) + (1 << 10)) >> 11;
    *(dataptr20 + 1) = (((tmp710 + z115) + z418) + (1 << 10)) >> 11;
    dataptr20 += 8;
    ctr21 --;
  }
  dataptr20 = data;
  ctr21 = 7;
  while (ctr21 >= 0) {
    tmp03 = *(dataptr20 + 0) + *(dataptr20 + 56);
    tmp710 = *(dataptr20 + 0) - *(dataptr20 + 56);
    tmp14 = *(dataptr20 + 8) + *(dataptr20 + 48);
    tmp69 = *(dataptr20 + 8) - *(dataptr20 + 48);
    tmp25 = *(dataptr20 + 16) + *(dataptr20 + 40);
    tmp58 = *(dataptr20 + 16) - *(dataptr20 + 40);
    tmp36 = *(dataptr20 + 24) + *(dataptr20 + 32);
    tmp47 = *(dataptr20 + 24) - *(dataptr20 + 32);
    tmp1011 = tmp03 + tmp36;
    tmp1314 = tmp03 - tmp36;
    tmp1112 = tmp14 + tmp25;
    tmp1213 = tmp14 - tmp25;
    *(dataptr20 + 0) = ((tmp1011 + tmp1112) + (1 << 1)) >> 2;
    *(dataptr20 + 32) = ((tmp1011 - tmp1112) + (1 << 1)) >> 2;
    z115 = (tmp1213 + tmp1314) * 4433;
    *(dataptr20 + 16) = ((z115 + tmp1314 * 6270) + (1 << 14)) >> 15;
    *(dataptr20 + 48) = ((z115 + tmp1213 * -15137) + (1 << 14)) >> 15;
    z115 = tmp47 + tmp710;
    z216 = tmp58 + tmp69;
    z317 = tmp47 + tmp69;
    z418 = tmp58 + tmp710;
    z519 = (z317 + z418) * 9633;
    tmp47 *= 2446;
    tmp58 *= 16819;
    tmp69 *= 25172;
    tmp710 *= 12299;
    z115 *= -7373;
    z216 *= -20995;
    z317 *= -16069;
    z418 *= -3196;
    z317 += z519;
    z418 += z519;
    *(dataptr20 + 56) = (((tmp47 + z115) + z317) + (1 << 14)) >> 15;
    *(dataptr20 + 40) = (((tmp58 + z216) + z418) + (1 << 14)) >> 15;
    *(dataptr20 + 24) = (((tmp69 + z216) + z317) + (1 << 14)) >> 15;
    *(dataptr20 + 8) = (((tmp710 + z115) + z418) + (1 << 14)) >> 15;
    dataptr20 ++;
    ctr21 --;
  }
  goto Lret_jpeg_fdct_islow;
  }
  Lret_jpeg_fdct_islow: /* CIL Label */ ;
  }
  return;
}
}