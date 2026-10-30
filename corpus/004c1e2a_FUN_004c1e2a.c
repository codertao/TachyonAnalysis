
uint FUN_004c1e2a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_7c [120];
  
  uVar1 = FUN_004c20cd(param_1);
  iVar2 = (*DAT_00565194)(uVar1,(-(uint)(DAT_00565178 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0056518c = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_004c67c0(DAT_00565188,local_7c);
    if (iVar2 == 0) {
      iVar2 = FUN_004c1f30(uVar1);
      if (iVar2 != 0) {
        DAT_0056518c = DAT_0056518c | 4;
        DAT_00565174 = uVar1;
        DAT_00565190 = uVar1;
      }
    }
    uVar3 = ~DAT_0056518c >> 2 & 1;
  }
  return uVar3;
}

