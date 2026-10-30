
void FUN_004016c0(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  
  *(int *)(param_2 + 0x14) = param_3;
  if (*(int *)(param_3 + 0x14) == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    iVar3 = FUN_0048e550(param_1 + 0x34,param_3);
    lVar2 = (longlong)*(int *)(param_3 + 0x14) * 0x32;
    pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x34);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,0x1a,
                iVar3 / (int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
      return;
    }
  }
  return;
}

