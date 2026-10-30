
void FUN_00436ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  short *psVar1;
  uint uVar2;
  
  if (param_5 != 0) {
    psVar1 = *(short **)(param_5 + 0x18);
    uVar2 = 0;
    if (*(int *)(param_5 + 0x14) != 0) {
      do {
        if ((*psVar1 == 3) && (*(int *)(psVar1 + 0x2a) == param_1)) {
          Sped_DispatchAction(*(undefined4 *)(psVar1 + 0x10),param_3,param_2,param_4);
        }
        psVar1 = (short *)((int)psVar1 + (uint)(ushort)psVar1[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_5 + 0x14));
    }
  }
  return;
}

