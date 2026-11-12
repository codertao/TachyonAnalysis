
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Image_FlipRows(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = DAT_00603104 >> 1;
  puVar3 = param_1;
  do {
    uVar1 = _DAT_00603100 >> 1;
    do {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 2;
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    puVar3 = puVar3 + _DAT_00603100;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_00603100 = _DAT_00603100 >> 1;
  DAT_00603104 = DAT_00603104 >> 1;
  return;
}

