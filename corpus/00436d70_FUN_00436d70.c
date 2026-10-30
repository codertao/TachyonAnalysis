
void FUN_00436d70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_4 + 0x54);
  if (iVar1 != 0) {
    psVar3 = *(short **)(iVar1 + 0x18);
    uVar4 = 0;
    if (*(uint *)(iVar1 + 0x14) != 0) {
      while ((((*psVar3 != 3 || (*(int *)(psVar3 + 0x2a) != param_1)) ||
              (iVar2 = *(int *)(psVar3 + 0x14), iVar2 == 0)) || (*(int *)(iVar2 + 0xf8) != 0))) {
        psVar3 = (short *)((int)psVar3 + (uint)(ushort)psVar3[1]);
        uVar4 = uVar4 + 1;
        if (*(uint *)(iVar1 + 0x14) <= uVar4) {
          return;
        }
      }
      FUN_00436b30(iVar2,0xe,param_3);
    }
  }
  return;
}

