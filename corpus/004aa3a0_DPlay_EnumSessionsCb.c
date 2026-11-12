
/* refine: keeps sessions whose application GUID = 0x52e8c0 (Tachyon) */

undefined4 DPlay_EnumSessionsCb(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_0052e8c0;
  piVar3 = (int *)(param_1 + 0x18);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = Net_FindSessionByGuid(param_1 + 8);
    if (iVar1 == 0) {
      Net_AddSession(*(undefined4 *)(param_1 + 0x30),param_1 + 8,(int *)(param_1 + 0x18),
                     (*(uint *)(param_1 + 4) & 0x400) != 0,*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                     *(undefined4 *)(param_1 + 0x4c));
    }
  }
  return 1;
}

