
void FUN_00414900(char param_1)

{
  int iVar1;
  undefined1 local_100 [256];
  
  if (DAT_005b91c4 < DAT_005b9210) {
    str_sprintf(local_100,s__s___s_c_00534224,&DAT_005b91d0,&DAT_005b90c4,(int)param_1);
    iVar1 = FUN_0048ced0(local_100);
    if (iVar1 != 0) {
      *(char *)((int)&DAT_005b90c4 + DAT_005b91c4) = param_1;
      DAT_005b91c4 = DAT_005b91c4 + 1;
    }
  }
  return;
}

