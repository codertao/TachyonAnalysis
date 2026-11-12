
/* CRT */

int __cftof(undefined8 *param_1,int param_2,int param_3)

{
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  
  __fltout2(*param_1,&local_14,local_2c);
  __fptostr((uint)(local_14 == 0x2d) + param_2,local_10 + param_3,&local_14);
  __cftof2(param_2,param_3,&local_14,0);
  return param_2;
}

