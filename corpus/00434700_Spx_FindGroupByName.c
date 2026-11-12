
/* sweep */

short * Spx_FindGroupByName(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  if (param_1 != 0) {
    psVar3 = *(short **)(param_1 + 0x18);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        if (((*psVar3 == 3) && (*(int *)(psVar3 + 0x2e) != -1)) &&
           (iVar1 = __stricmp(param_2,*(int *)(psVar3 + 0x2e) * 0x20 + *(int *)(param_1 + 0xf8)),
           iVar1 == 0)) {
          return psVar3;
        }
        psVar3 = (short *)((int)psVar3 + (uint)(ushort)psVar3[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x14));
    }
  }
  return (short *)0x0;
}

