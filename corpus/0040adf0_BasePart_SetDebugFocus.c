
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void BasePart_SetDebugFocus(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0xc2) != '\x02') {
    DAT_005b3318 = param_1;
    _DAT_005b3328 = *(undefined4 *)(param_2 + 0x40);
    puVar1 = (undefined4 *)
             Pak_GetAttachPoint(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_2 + 0x3c));
    _DAT_005b331c = *puVar1;
    _DAT_005b3320 = puVar1[1];
    _DAT_005b3324 = puVar1[2];
  }
  return;
}

