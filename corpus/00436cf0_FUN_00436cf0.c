
void FUN_00436cf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  iVar1 = *(int *)(param_4 + 0x54);
  if (iVar1 != 0) {
    psVar3 = *(short **)(iVar1 + 0x18);
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      do {
        if (((*psVar3 == 3) && (*(int *)(psVar3 + 0x2a) == param_1)) &&
           (*(int *)(psVar3 + 0x14) != 0)) {
          FUN_00436b30(*(int *)(psVar3 + 0x14),1,param_3);
        }
        psVar3 = (short *)((int)psVar3 + (uint)(ushort)psVar3[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar1 + 0x14));
    }
  }
  return;
}

