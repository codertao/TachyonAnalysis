
void FUN_00468ef0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004b5620(0x20);
  iVar1 = FUN_004b5650();
  for (iVar2 = 0x32; (iVar1 == 0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
    MessagePump_IdleTick();
    FUN_004b5500();
    iVar1 = FUN_004b5650();
  }
  FUN_00450770(param_1,param_2);
  FUN_004b55f0(DAT_005b2d0c);
  return;
}

