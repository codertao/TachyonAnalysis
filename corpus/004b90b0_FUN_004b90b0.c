
void FUN_004b90b0(undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_3 == 1) {
    puVar2 = DAT_006af564;
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    DAT_006af560 = 1;
    DAT_006af568 = param_2;
    return;
  }
  puVar2 = DAT_006af570;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  DAT_006af56c = 1;
  DAT_006af574 = param_2;
  return;
}

