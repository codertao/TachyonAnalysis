
/* sweep */

void Orders_UpdateFromNet(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Orders_FindById(param_1,&DAT_005b3220);
  if (iVar1 != 0) {
    if (param_2 == 1) {
      *(undefined4 *)(iVar1 + 0x84) = 1;
    }
    else if (param_2 == 2) {
      Orders_ApplyUpdate(iVar1);
      return;
    }
  }
  return;
}

