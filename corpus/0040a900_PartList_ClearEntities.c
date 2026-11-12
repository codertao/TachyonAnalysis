
/* sweep */

void PartList_ClearEntities(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*param_2 != 0) {
    puVar2 = (undefined4 *)(param_2[1] + 0x7c);
    do {
      *puVar2 = 0;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x20;
    } while (uVar1 < *param_2);
  }
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    *(int *)(*(int *)(param_1 + 0xdc) + 0x7c) = param_1;
  }
  return;
}

