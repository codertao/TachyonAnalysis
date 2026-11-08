
/* S->C 0x1029 handler */

void CliOn_RosterClear(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = *param_1;
  (&DAT_005b3a78)[sVar1 * 0x11] = 0;
  puVar3 = (undefined4 *)(&DAT_005b3a38 + sVar1 * 0x44);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

