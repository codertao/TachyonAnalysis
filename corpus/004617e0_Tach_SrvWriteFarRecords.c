
/* advance far cursor conn+0x138, write next 2 not yet stamped this packet (flag 0x10); cursor=0 at
   end -> rebuild */

undefined4 Tach_SrvWriteFarRecords(int param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    return param_2;
  }
  do {
    iVar1 = **(int **)(param_1 + 0x138);
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        *(undefined4 *)(param_1 + 0x138) = 0;
        return param_2;
      }
      if ((*(short *)(iVar1 + 0x7c) != DAT_0058b080) && ((*(byte *)(iVar1 + 0xc3) & 1) == 0)) {
        param_2 = Tach_SrvWriteEntityRecord(iVar1,param_3,param_2,0x10);
        *param_4 = *param_4 + 1;
        uVar2 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 4;
  } while (uVar2 < 2);
  return param_2;
}

