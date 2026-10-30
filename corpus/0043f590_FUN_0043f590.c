
undefined4 FUN_0043f590(undefined4 param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  int iVar1;
  BOOL BVar2;
  
  iVar1 = FUN_0043fa70(param_1,param_2);
  if (iVar1 != 0) {
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect((RECT *)(iVar1 + 0xc4),pt);
    if (BVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

