
void __cdecl FUN_100042e0(int param_1,in_addr param_2)

{
  tm *_Tm;
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  time((time_t *)&stack0xfffffffc);
  _Tm = localtime((time_t *)&stack0xfffffffc);
  pcVar1 = asctime(_Tm);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  uVar2 = FUN_10005010(param_2);
  fprintf(DAT_10019c6c,s__s_removed___s___id__x____s_10007214,param_1,uVar2,uVar3,pcVar1);
  return;
}

