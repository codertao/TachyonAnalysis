
/* S->C 0x1014 handler */

void CliOn_EntityStateOp(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*(undefined4 *)(param_1 + 2));
  if (iVar1 != 0) {
    switch(*param_1) {
    case 1:
      *(undefined1 *)(iVar1 + 0xf1) = 1;
      FUN_00466590(1,0xb,0,0xff);
      return;
    case 4:
      FUN_0048b050(iVar1);
      *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) | 1;
      return;
    case 8:
      FUN_00415fa0(iVar1,1);
      return;
    case 0x10:
      FUN_00408dd0(iVar1,param_1[1]);
    }
  }
  return;
}

